#include <bits/stdc++.h>

#define ll long int

using namespace std;

int main() {
    ll n, x;
    vector<ll> items;

    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> x;

        items.push_back(x);
    }

    sort(items.begin(), items.end());

    ll day = 1;

    for (ll i = 0; i < items.size(); i++) {
        if (items[i] >= day) {
            day++;
        }
    }

    cout << day - 1;
    
    return 0;
}
