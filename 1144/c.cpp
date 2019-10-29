#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, i, x;
	int flag = 0;

	vector<ll> items;
	vector<ll> vector1;
	vector<ll> vector2;

	cin >> n;

	if (n == 0) {
		cout << "YES" << endl << "0" << endl << endl << "0" << endl << endl; 
		return 0;
	}

	for (i = 0; i < n; i++) {
		cin >> x;
		items.push_back(x);
	}

	sort(items.begin(), items.end());

	for (i = 0; i < n - 1; i++) {
		if (items.at(i) == items.at(i + 1)) {
			if (flag == 1) {
				cout << "NO" << endl;
				return 0;
			}

			vector2.push_back(items.at(i));

			flag = 1;
		}
		else {
			vector1.push_back(items.at(i));
			
			flag = 0;
		}
	}

	vector1.push_back(items.at(n - 1));

	cout << "YES" << endl;
	cout << vector1.size() << endl;

	for (i = 0; i < vector1.size(); i++) {
		cout << vector1.at(i);

		if (i < vector1.size() - 1) {
			cout << " ";
		}
	}

	cout << endl;
	cout << vector2.size() << endl;

	for (i = vector2.size() - 1; i >= 0; i--) {
		cout << vector2.at(i);

		if (i > 0) {
			cout << " ";
		}
	}

	cout << endl;

	return 0;
}