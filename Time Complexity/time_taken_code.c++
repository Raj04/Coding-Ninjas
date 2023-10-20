#include <iostream>
#include <chrono>

int sumOfNaturalNumbers(int N) {
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int N = 1000000; // Change this to the desired input size

    auto start = std::chrono::high_resolution_clock::now();

    int result = sumOfNaturalNumbers(N);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Sum of first " << N << " natural numbers: " << result << std::endl;
    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
