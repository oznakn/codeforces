#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
	ll n;
	ll x;

	cin >> n;

	ll odd_count = 0;
	ll even_count = 0;

	for (ll i = 0; i < n; i++) {
		cin >> x;
		
		if (x % 2 == 0) even_count += 1;
		else odd_count += 1;
	}

	if (even_count < odd_count) cout << even_count;
	else cout << odd_count;

	return 0;
}
