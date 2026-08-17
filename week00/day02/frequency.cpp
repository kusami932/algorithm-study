#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {4, 2, 4, 3, 2, 4};
    unordered_map<int, int> freq;

    for (int x : arr) {
        freq[x]++;
    }

    for (const auto& [value, count] : freq) {
        cout << value << ": " << count << '\n';
    }

    return 0;
}