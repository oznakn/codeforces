#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, l, r, d;
        cin >> l >> r >> d;

        for (int j = 1; ; j++) {
            x = j * d;

            if (x < l || x > r) {
                break;
            }
        }

        cout << x << endl;
    }

    return 0;
}