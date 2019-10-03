#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n, m;

    cin >> n >> m;

    ll left = n - m;

    if (m == 0) {
        cout << 1;
    }
    else if (left < m) {
        cout << left;
    }
    else if(left == 0) {
        cout << 0;
    }
    else {
        cout << m;
    }

    return 0;
}
