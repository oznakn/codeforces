#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    int n, count;
    char c;

    cin >> n;

    count = 0;

    for (ll i = 0; i < n; i++) {
        cin >> c;

        if (c == '+') {
            count++;
        }
        else if (count > 0) {
            count--;
        }
    }
    
    cout << count;
    
    return 0;
}
