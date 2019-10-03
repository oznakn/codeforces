#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

ll calculate_c(vector<ll> vector1, vector<ll> vector2) {
	ll i, c = 0;

	for (i = 0; i < vector1.size(); i++) {
		c += vector1.at(i);
	}

	for (i = 0; i < vector2.size(); i++) {
		c += vector2.at(i);
	}

	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, i, j, c, k, x;

	int flag = 0;

	vector<ll> odds;
	vector<ll> odds2;

	vector<ll> evens;
	vector<ll> evens2;
 
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> x;

		if (x % 2 == 0) evens.push_back(x);
		else odds.push_back(x);
	}

	sort(odds.begin(), odds.end());
	sort(evens.begin(), evens.end());

	odds2.assign(odds.begin(), odds.end());
	evens2.assign(evens.begin(), evens.end());

	while (1) {
		if (flag == 0) {
			if (odds.size() > 0) {
				odds.pop_back();
				flag = 1;
			} 
			else {
				break;
			}
		}
		else {
			if (evens.size() > 0) {
				evens.pop_back();
				flag = 0;
			}
			else {
				break;
			}
		}
	}

	c = calculate_c(odds, evens);

	if (c == 0) {
		cout << c << endl;
		return 0;
	}

	flag = 1;

	while (1) {
		if (flag == 0) {
			if (odds2.size() > 0) {
				odds2.pop_back();
				flag = 1;
			} 
			else {
				break;
			}
		}
		else {
			if (evens2.size() > 0) {
				evens2.pop_back();
				flag = 0;
			}
			else {
				break;
			}
		}
	}

	k = calculate_c(odds2, evens2);

	if (k < c) {
		cout << k << endl;
	}
	else {
		cout << c << endl;
	}


	return 0;
}