#include <iostream>
#include <stdexcept>
using namespace std;

long long factorial(int n) {
    if (n < 0) {
        throw invalid_argument("factorial is undefined for negative integers");
    }

    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n) << '\n';

    return 0;
}