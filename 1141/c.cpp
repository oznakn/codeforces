#include <bits/stdc++.h>

#define ll long long int

#define MAX_LEN 500000

using namespace std;

int main() {
	ll i, n, c, j;

	ll diffs[MAX_LEN - 1];
	vector<ll> items;
	vector<ll> items_sorted;

	items.push_back(0);

	c = 0;

	cin >> n;

	for (i = 0; i < n - 1; i++) {
		cin >> diffs[i];
	}

	for (i = 1; i < n; i++) {
		items.push_back(items[i - 1] + diffs[i - 1]);

		if (c > items[i]) {
			c = items[i];
		}
	}

	items_sorted.assign(items.begin(), items.end());
	sort(items_sorted.begin(), items_sorted.end());

	for (i = 0; i < n - 1; i++) {
		if (items_sorted[i] != items_sorted[i + 1] - 1) {
			cout << -1 << endl;
			return 0;
		}
	}

	for (i = 0; i < n; i++) {
		cout << items[i] - c + 1;

		if (i != n - 1) {
			cout << " ";
		}
	}

	cout << endl;

	return 0;
}