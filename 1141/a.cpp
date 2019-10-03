#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
	ll i, x, y, r, f;

	f = 0;
	r = 0;
	cin >> x >> y;

	while (x != y) {
		i = y / x;

		if (i % 2 == 0) {
			r++;
			x *= 2;
		}
		else if (i % 3 == 0) {
			r++;
			x *= 3;
		}
		else {
			r = -1;
			break;
		}
	}

	cout << r << endl;
}