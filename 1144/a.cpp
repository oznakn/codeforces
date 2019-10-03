#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, i, j;
	string item;

	cin >> n;

	for (i = 0; i < n; i++) {
		string item;
		int pass = 1;
		cin >> item;

		vector<char> items(item.begin(), item.end());

		sort(items.begin(), items.end());

		for (j = 0; j < items.size() - 1; j++) {
			if (items.at(j) != items.at(j+1) - 1) {
				cout << "NO" << endl;
				pass = 0;
				break;
			}
		}

		if (pass == 1) {
			cout << "YES" << endl;
		} 
	}


	return 0;
}