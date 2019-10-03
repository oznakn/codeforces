#include <iostream>
#include <cmath>

#define ll long long int

using namespace std;

ll find_digit_count(ll n) {
	ll c = 0;

	while(1) {
		n = (n - (n % 10)) / 10;
		c++;

		if (n == 0) break;
	}

	return c;
}

ll find_digit_mul(ll n) {
	ll c;
	ll result = 1;
	
	while (1) {
		c = (n % 10);
		result *= c;
		n = (n - c) / 10;

		if (n == 0) break;
	}

	return result;
}

ll find_one_less(ll n, ll i) {
	ll c;

	c = pow(10, i);

	n -= (n % c);
	n -= 1;

	return n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, i, c, k;
	ll max = 0;

	cin >> n;	

	if (n < 10) {
		cout << n << endl;
		return 0;
	}

	max = find_digit_mul(n);
	c = find_digit_count(n);

	for (i = 1; i < c; i++) {
		if ((k = find_digit_mul(find_one_less(n, i))) > max) {
			max = k;
		}
	}
 

	cout << max << endl;

	return 0;
}
