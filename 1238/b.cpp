#include <bits/stdc++.h>

#define ll long long int

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll q, n, r, x, k, m, c;
	vector<ll> monsters;

	cin >> q;

	for (ll i = 0; i < q; i++) {
		monsters.clear();

		cin >> n;
		cin >> r;
		
		for (ll j = 0; j < n; j++) {
			cin >> x;
			monsters.push_back(x);
		}

		sort(monsters.begin(), monsters.end());
		monsters.erase(unique(monsters.begin(), monsters.end()), monsters.end());

		k = 0;
		m = monsters.size() - 1;
		c = 0;

		while (m >= 0 && k < monsters[m]) {
			m--;

			k += r;
			c += 1;
		}

		cout << c << endl;
	}
}
