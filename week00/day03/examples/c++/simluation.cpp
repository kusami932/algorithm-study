#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int commandCount;
    cin >> commandCount;

    queue<string> waitingLine;

    for (int i = 0; i < commandCount; ++i) {
        string command;
        cin >> command;

        if (command == "ENQUEUE") {
            string name;
            cin >> name;
            waitingLine.push(name);
        }

        else if (command == "DEQUEUE") {
            if (waitingLine.empty()) {
                cout << "EMPTY\n";
            } else {
                cout << waitingLine.front() << '\n';
                waitingLine.pop();
            }
        }

        else if (command == "FRONT") {
            if (waitingLine.empty()) {
                cout << "EMPTY\n";
            } else {
                cout << waitingLine.front() << '\n';
            }
        }

        else if (command == "SIZE") {
            cout << waitingLine.size() << '\n';
        }

        else if (command == "EMPTY") {
            cout << waitingLine.empty() << '\n';
        }
    }

    return 0;
}