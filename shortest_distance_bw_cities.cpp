#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Function to find the minimum distance vertex not yet processed
int minDistance(const vector<int>& dist, const vector<bool>& processed, int V) {
    int minDist = INF, minIndex = -1;

    for (int v = 0; v < V; ++v) {
        if (!processed[v] && dist[v] <= minDist) {
            minDist = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}

// Function to print the shortest distances from the source city
void printSolution(const vector<int>& dist, int V) {
    cout << "Shortest distances from the source city:\n";
    for (int i = 0; i < V; ++i) {
        cout << "City " << i << ": " << dist[i] << " units\n";
    }
}

// Function to find the shortest distance between cities using Dijkstra's algorithm
void shortestDistance(const vector<vector<int>>& graph, int src) {
    int V = graph.size();
    vector<int> dist(V, INF);    // Array to store the shortest distances
    vector<bool> processed(V, false);

    dist[src] = 0;  // Distance from the source city to itself is zero

    for (int count = 0; count < V - 1; ++count) {
        int u = minDistance(dist, processed, V);

        processed[u] = true;

        for (int v = 0; v < V; ++v) {
            if (!processed[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist, V);
}

int main() {
    int V;  // Number of cities
    cout << "Enter the number of cities: ";
    cin >> V;

    vector<vector<int>> graph(V, vector<int>(V));

    cout << "Enter the adjacency matrix for the cities (0 for no direct connection):\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> graph[i][j];
        }
    }

    int src;  // Source city
    cout << "Enter the source city: ";
    cin >> src;

    shortestDistance(graph, src);

    return 0;
}
