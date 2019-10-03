#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n;

    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll c;
        cin >> c;

        ll items[c];
        ll items_mod[c];
        ll items_mod_counts[3] = {};

        for (ll j = 0; j < c; j++) {
            cin >> items[j];
            items_mod[j] = items[j] % 3;
            items_mod_counts[items_mod[j]]++;
        }

        ll r = items_mod_counts[0];
        
        if (items_mod_counts[1] < items_mod_counts[2]) {
            r += items_mod_counts[1];
            items_mod_counts[2] -= items_mod_counts[1];
            items_mod_counts[1] = 0;
        }
        else {
            r += items_mod_counts[2];
            items_mod_counts[1] -= items_mod_counts[2];
            items_mod_counts[2] = 0;
        }


        if (items_mod_counts[2] > 0) {
            r += (ll) (items_mod_counts[2] / 3);
        }

        if (items_mod_counts[1] > 0) {
            r += (ll) (items_mod_counts[1] / 3);
        }

       
        cout << r << endl;
    }


    return 0;
}
