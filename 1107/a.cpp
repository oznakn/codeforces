#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll q;

    cin >> q;

    for (ll i = 0; i < q; i++) {
        ll n;

        cin >> n;

        ll items[n];
        vector<ll> parts;

        for (ll j = 0; j < n; j++) {
            cin >> items[j];
        }

        parts.push_back(items[0]);
        parts.push_back(items[1]); // todo

        ll j = 1;
        ll k = 1;

        while (j < n) {
            while (j < n && parts[j - 1] >= parts[j]) {
                parts[k] *= 10;
                parts[k] = items[j];
                j++;
            }

            if (parts[j - 1] >= parts[j] && j == n) {
                cout << "NO" << endl;
                return 0;
            } else if (j == n) {
                break;
            } else {
                k++;
            }
        }

        cout << "YES" << endl << parts.size() << endl;

        for (ll o = 0; o < parts.size(); o++) {
            cout << parts[o];

            if (o < parts.size() - 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}