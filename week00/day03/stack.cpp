#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << '\n';   // 30
    cout << st.size() << '\n';  // 3

    st.pop();                   // 30 제거

    cout << st.top() << '\n';   // 20

    if (!st.empty()) {
        cout << "Stack is not empty\n";
    }

    return 0;
}