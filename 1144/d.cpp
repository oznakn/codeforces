#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, i, j, x, result, c, k;
	vector<ll> items;
	vector<ll> sorted_items;
	vector<pair<ll, ll>> left;
	vector<pair<ll, ll>> right;

	c = 0;
	result = 0;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> x;
		items.push_back(x);
	}

	sorted_items.assign(items.begin(), items.end());
	
	sort(sorted_items.begin(), sorted_items.end());

	c = 0;
	j = 0;
	k = 0;

	for (i = 0; i < n - 1; i++) {
		if (sorted_items.at(i) == sorted_items.at(i + 1)) {
			c++;
		}
		else {
			if (c > k) {
				k = c;
				j = i;
			}
			c = 0;
		}
	}

	if (c > k) {
		j = i;
	}

	for (i = 0; i < n; i++) {
		if (items.at(i) == sorted_items.at(j)) {
			j = i;
		}
	}
	
	for (i = j - 1; i >= 0; i--) {
		if (items[i] == items[i + 1]) {
			continue;
		}

		result++;

		if (items[i] < items[i + 1]) {
			left.push_back(make_pair(i + 1, i + 2));

			items[i] += fabs(items[i] - items[i + 1]);
		}
		else {
			right.push_back(make_pair(i + 1, i + 2));
		
			items[i] -= fabs(items[i] - items[i + 1]);
		}
	}


	for (i = j + 1; i < n; i++) {
		if (items[i] == items[i - 1]) {
			continue;
		}
		
		result++;

		if (items[i] < items[i - 1]) {
			left.push_back(make_pair(i + 1, i));
		
			items[i] += fabs(items[i] - items[i - 1]);
		}
		else {
			right.push_back(make_pair(i + 1, i));

			items[i] -= fabs(items[i] - items[i - 1]);
		}
	}

	cout << result << endl;

	for (i = 0; i < left.size(); i++) {
		// cout << "1 " << left.at(i).first << " " << left.at(i).second << endl;
	}

	for (i = 0; i < right.size(); i++) {
		// cout << "2 " << right.at(i).first << " " << right.at(i).second << endl;
	}

	for (i = 0; i < items.size() - 1; i++) {
		if (items[i] != items[i + 1]) {
			cout << items[i] << " " << items[i + 1] << endl;
		}
	}

	cout << items[98303] << " " << items[98304] << " " << items[98305] << " " << items[98306] << " " << items[98307] << " " << items[98308] << endl;
 
	return 0;
}