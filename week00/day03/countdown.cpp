#include <iostream>
using namespace std;

void countdown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << '\n';
    countdown(n - 1);
}
