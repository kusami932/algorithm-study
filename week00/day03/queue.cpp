#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << '\n';  // 10
    cout << q.back() << '\n';   // 30

    int value = q.front();
    q.pop();                    // 10 제거

    cout << q.front() << '\n';  // 20

    if (!q.empty()) {
        cout << "Queue is not empty\n";
    }

    return 0;
}