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

int main() {
    int n;
    cin >> n;

    cout << fibonacciRecursive(n) << '\n';

    return 0;
}