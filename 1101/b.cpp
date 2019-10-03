#include <bits/stdc++.h>

using namespace std;

int count(string s, char c) {
    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) result++;
    }

    return result;
}

int main() {
    string s;

    cin >> s;
    int first = s.find('[');

    while (first != string::npos) {
        int last = s.find_last_of(']');

        while (last != string::npos) {
            int firstColon = s.find(':', first);

            if (firstColon != string::npos && firstColon < last) {
                int secondColon = s.find_last_of(':', last);

                if (secondColon != string::npos && firstColon != secondColon) {
                    int c = count(s.substr(firstColon + 1, secondColon - firstColon - 1), '|');

                    cout << (c + 4) << endl;
                    return 0;
                }
            }

            last = s.find(']', last + 1);
        }

        first = s.find('[', first + 1);
    }

    cout << "-1" << endl;

    return 0;
}