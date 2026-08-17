#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> numbers(n);

    for (long long& number : numbers) {
        cin >> number;
    }

    long long total = 0;
    long long min_value = numbers[0];
    long long max_value = numbers[0];

    for (long long number : numbers) {
        total += number;

        if (number < min_value) {
            min_value = number;
        }

        if (number > max_value) {
            max_value = number;
        }
    }

    string text;
    cin >> text;

    array<int, 26> frequency{};

    for (char ch : text) {
        int index = ch - 'a';
        frequency[index]++;
    }

    cout << total << ' '
         << min_value << ' '
         << max_value << '\n';

    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            char ch = static_cast<char>(i + 'a');
            cout << ch << ' ' << frequency[i] << '\n';
        }
    }

    return 0;
        
}
