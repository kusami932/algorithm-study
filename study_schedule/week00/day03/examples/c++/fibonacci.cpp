#include <iostream>
#include <stdexcept>
using namespace std;

long long fibonacciRecursive(int n) {
    if (n < 0) {
        throw invalid_argument("n must be non-negative");
    }

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacciRecursive(n - 1)
         + fibonacciRecursive(n - 2);
}

long long fibonacciIterative(int n) {
    if (n < 0) {
        throw invalid_argument("n must be non-negative");
    }

    if (n == 0) {
        return 0;
    }

    long long previous = 0;  // F(0)
    long long current = 1;   // F(1)

    for (int i = 2; i <= n; ++i) {
        long long next = previous + current;
        previous = current;
        current = next;
    }

    return current;
}


int main() {
    int n;
    cin >> n;

    cout << fibonacciRecursive(n) << '\n';
    cout << fibonacciIterative(n) << '\n';

    return 0;
}