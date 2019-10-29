#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
	ll q;

	cin >> q;

	for (ll i = 0; i < q; i++) {
		ll h, n;

		vector<ll> ps;

		cin >> h >> n;

		for (ll j = 0; j < n; j++) {
			ll x;
			cin >> x;

			ps.push_back(x);
		}

		sort(ps.begin(), ps.end());
		

		ll result = 0;

		ll k = h;
		ll j = ps.size() - 1;

		while (k > 0) {
			ll diff;
			
			if (j < 0) diff = k;
			else diff = k - ps[j];

			cout << "k: " << k << ", j:" << j << ", diff: " << diff << endl;
			if (j < 0) {
				cout << "ALERT k:" << k << endl;
			}

			if (diff == 0) {
				ps[j] = k - 1;
				k -= 1;
			} else if (diff == 1) {
				j -= 1;
				k -= 1;
			} else if (diff == 2) {
				j -= 1;
				k -= 2;
			} else {
				result += 1;
				ps.insert(ps.begin() + j, k - 2);
				k -= 2;
			}
		}

		cout << result << endl;
	}

	return 0;
}
