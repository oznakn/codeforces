#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n;

    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll x, r = 0;

        cin >> x;
    
        while (x != 1) {
            if (x % 5 == 0) {
                r++;
                x /= 5;
                x *= 4;
            }
            else if (x % 3 == 0) {
                r++;
                x /= 3;
                x *= 2;
            }
            else if (x % 2 == 0) {
                r++;
                x /= 2;
            }
            else {
                r = -1;
                break;
            }
        }


        cout << r << endl;
    }


    return 0;
}
