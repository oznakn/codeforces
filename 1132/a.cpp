#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll cn1, cn2, cn3, cn4;

    cin >> cn1 >> cn2 >> cn3 >> cn4;

    ll left = (cn1 * 2);
    ll right = (cn4 * 2);

    if (cn1 == 0 && cn4 == 0 && cn3 > 0) {
        cout << "0";
    }
    else if (left == right) {
        cout << "1";
    }
    else {
        cout << "0";
    }

    return 0;
}