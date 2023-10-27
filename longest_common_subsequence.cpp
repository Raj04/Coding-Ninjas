#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to find the length of the Longest Common Subsequence
int longestCommonSubsequenceLength(const string& str1, const string& str2) {
    int m = str1.length();
    int n = str2.length();

    // Create a 2D table to store the length of LCS
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill the table using DP
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

// Function to find the Longest Common Subsequence
string longestCommonSubsequence(const string& str1, const string& str2) {
    int m = str1.length();
    int n = str2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int length = dp[m][n];
    string lcs(length, ' ');

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            lcs[length - 1] = str1[i - 1];
            i--;
            j--;
            length--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    return lcs;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int length = longestCommonSubsequenceLength(str1, str2);
    cout << "Length of Longest Common Subsequence: " << length << endl;

    string lcs = longestCommonSubsequence(str1, str2);
    cout << "Longest Common Subsequence: " << lcs << endl;

    return 0;
}
