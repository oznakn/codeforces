#include <bits/stdc++.h>

#define ll long long int

#define MAX_HOUR_COUNT 200000

using namespace std;

int main() {
	ll i, n, x, r, f;

	char hours[2 * MAX_HOUR_COUNT];

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> x;
		hours[i + n] = (hours[i] = x);
	}

	r = 0;
	f = 0;

	for (i = 0; i < (2 * n) - 1; i++) {
		if (hours[i] == 1 && hours[i + 1] == 1) {
			f++;
		}
		else {
			if (hours[i] == 1) {
				f++;
			}

			if (r < f) {
				r = f;
			}
			
			f = 0;
		}
	}

	cout << r << endl;
}