#include <bits/stdc++.h>

#define ll long long int

#define ALPHA_LEN 27

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	/* 97 122 */

	ll n, i, x, y, k;
	char c;

	vector<ll> left[ALPHA_LEN];
	vector<char> left_items;
	vector<ll> right[ALPHA_LEN];
	vector<char> right_items;

	vector<pair<ll, ll>> results;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> c;

		if (c == '?') {
			left[26].push_back(i);
			left_items.push_back(26);
		}
		else {
			left[c - 97].push_back(i);
			left_items.push_back(c - 97);
		}
	}

	for (i = 0; i < n; i++) {
		cin >> c;

		if (c == '?') {
			right[26].push_back(i);
			right_items.push_back(26);
		}
		else {
			right[c - 97].push_back(i);
			right_items.push_back(c - 97);
		}
	}

	for (i = 0; i < n; i++) {
		k = left_items[i];

		if (k == 26) continue;

		if (left[k].size() > 0) {
			x = left[k][left[k].size() - 1];

			if (right[k].size() > 0) {
				y = right[k][right[k].size() - 1];
				left[k].pop_back();
				right[k].pop_back();

				results.push_back(make_pair(x, y));
			}
			else if (right[26].size() > 0) {
				y = right[26][right[26].size() - 1];
				left[k].pop_back();
				right[26].pop_back();

				results.push_back(make_pair(x, y));
			}
		}
	}


	for (i = 0; i < n; i++) {
		k = right_items[i];

		if (k == 26) continue;
		
		if (right[k].size() > 0) {
			y = right[k][right[k].size() - 1];

			if (left[k].size() > 0) {
				x = left[k][left[k].size() - 1];

				right[k].pop_back();
				left[k].pop_back();

				results.push_back(make_pair(x, y));
			}
			else if (left[26].size() > 0) {
				x = left[26][left[26].size() - 1];
				right[k].pop_back();
				left[26].pop_back();

				results.push_back(make_pair(x, y));
			}	
		}
	}

	for (i = 0; i < n; i++) {
		k = left_items[i];

		if (left[k].size() > 0) {
			x = left[k][left[k].size() - 1];

			if (right[k].size() > 0) {
				y = right[k][right[k].size() - 1];
				left[k].pop_back();
				right[k].pop_back();

				results.push_back(make_pair(x, y));
			}
			else if (right[26].size() > 0) {
				y = right[26][right[26].size() - 1];
				left[k].pop_back();
				right[26].pop_back();

				results.push_back(make_pair(x, y));
			}
		}
	}


	for (i = 0; i < n; i++) {
		k = right_items[i];

		if (right[k].size() > 0) {
			y = right[k][right[k].size() - 1];

			if (left[k].size() > 0) {
				x = left[k][left[k].size() - 1];

				right[k].pop_back();
				left[k].pop_back();

				results.push_back(make_pair(x, y));
			}
			else if (left[26].size() > 0) {
				x = left[26][left[26].size() - 1];
				right[k].pop_back();
				left[26].pop_back();

				results.push_back(make_pair(x, y));
			}	
		}
	}


	cout << results.size() << endl;

	for (i = 0; i < results.size(); i++) {
		cout << results[i].first + 1 << " " << results[i].second + 1 << endl;
	}

	return 0;
}