#include <iostream>
#include <vector>

#define ll long long int

using namespace std;


int main() {
    ll n, m;

    cin >> n >> m;

    ll counts[n] = {};

    vector<ll> items;

    for (ll i = 0; i < m; i++) {
        ll a, b;

        cin >> a >> b;

        counts[a]++;
        counts[b]++;

        if (counts[a] == n) {
            items.push_back(a);
        }

        if (counts[b] == n) {
            items.push_back(b);
        }
    }

    if (items.size() >= 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
