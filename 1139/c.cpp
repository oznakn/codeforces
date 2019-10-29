#include <bits/stdc++.h>

#define ll long long int

#define MAX_VERTEX_COUNT 100000
#define MAX_EDGE_COUNT MAX_VERTEX_COUNT - 1

using namespace std;

const ll md = 1e9 + 7;

ll find_recursive(vector<ll> items[], ll entry,ll length_left) {
	ll i;
	ll c = 0;

	if (length_left == 0) return 1;

	for (i = 0; i < items[entry].size(); i++) {
		c += find_recursive(items, items[entry][i], length_left - 1);
	}

	return c;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	ll n, k, i, x, y, z, r, j;

	r = 0;

	cin >> n >> k;

	vector<ll> items[n + 1];

	r = pow(n, k);

	for (i = 1; i < n; i++) {
		cin >> x >> y >> z;

		if (z == 0) {
			items[x].push_back(y);
			items[y].push_back(x);
		}
	}

	for (i = 1; i <= n; i++) {
		items[i].push_back(i);
	}
	
	cout << "----" << endl;
	for (i = 1; i <= n; i++) {
		cout << i << " => ";
		for (j = 0; j < items[i].size(); j++) {
			cout << items[i][j] << " ";
		}
		cout << endl;
	}
	cout << "----" << endl;

	for (i = 1; i <= n; i++) {
		r -= find_recursive(items, i , k);
	}

	cout << r  << endl;

	return 0;
}