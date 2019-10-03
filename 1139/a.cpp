#include <bits/stdc++.h>

#define ll long long int

#define MAX_LEN 65000

using namespace std;

int main() {
	ll n, i, r;

	char items[MAX_LEN];

	r = 0;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> items[i];
		if (items[i] % 2 == 0) r += i + 1;
	}
	
	cout << r << endl;

	return 0;
}