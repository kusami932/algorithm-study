#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParentheses(const string& s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (st.empty()) {
                return false;
            }

            char open = st.top();
            st.pop();

            if (ch == ')' && open != '(') {
                return false;
            }

            if (ch == ']' && open != '[') {
                return false;
            }

            if (ch == '}' && open != '{') {
                return false;
            }
        } else {
            // 문제에서 괄호만 입력된다고 보장하지 않는 경우
            return false;
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValidParentheses(s)) {
        cout << "valid\n";
    } else {
        cout << "invalid\n";
    }

    return 0;
}