#include <bits/stdc++.h>

#define ll long long int

#define MAX_CHOC_TYPE 200000

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	ll n, i, j, r;

	ll items[MAX_CHOC_TYPE];

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> items[i];
	}

	r = items[n - 1];

	for (i = n - 2; i >= 0; i--) {
		if (items[i] >= items[i + 1]) items[i] = items[i + 1] - 1;
		
		if (items[i] == 0) break;

		r += items[i];
	}

	cout << r << endl;

	return 0;
}