#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int check(vector<ll>* problems) {
    for (ll i = 0; i < problems->size(); i++) {
        if (problems->at(i) == 0) return 0;
    }

    return 1;
}

void apply(vector<ll>* problems) {
    for (ll i = 0; i < problems->size(); i++) {
        problems->at(i) -= 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;

    cin >> n >> m;

    vector<ll>* problems = new vector<ll>(n);
    fill(problems->begin(), problems->end(), 0);

    for (ll i = 0; i < m; i++) {
        ll level;
        cin >> level;

        problems->at(level - 1) += 1;

        if (check(problems)) {
            apply(problems);
            cout << 1;
        }
        else {
            cout << 0;
        }
    }

    return 0;
}