#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n;
    
    cin >> n;

    int items[n];
    ll item_numbers[11];

    memset(item_numbers, 0, sizeof(item_numbers));

    for (ll i = 0; i < n; i++) {
        cin >> items[i];
        item_numbers[items[i]]++;
    }

    bool has_finished = false;

    while (!has_finished) {
        has_finished = true;
        
        bool one_used = false;

        for (ll i = 1; i <= 10; i += 2) {
            if (item_numbers[i] != item_numbers[i + 1]) {
                if (one_used) {
                    has_finished = false;
                    
                    item_numbers[items[--n]]--;
                    break;    
                }
                else {
                    one_used = true;
                }
            }
        }
    }

    cout << n;

    return 0;
}
