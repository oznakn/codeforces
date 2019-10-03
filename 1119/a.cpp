#include <iostream>

#define ll long long int

#define MAX_HOUSE 300000

using namespace std;

int main() {
	ll n, i, k, first, last, result1, result2;
	ll items[MAX_HOUSE];
	
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> items[i];
	}

	if (items[0] != items[n - 1]) {
		cout << n - 1 << endl;
		return 0;
	}

	first = items[0];
	last = items[n - 1];
	k = 0;

	while (first == last) {
		first = items[++k];
	}

	result1 = n - k - 1;

	first = items[0];
	last = items[n - 1];
	k = n - 1;

	while (first == last) {
		first = items[--k];
	}

	result2 = k;

	if (result1 > result2) {
		cout << result1 << endl;
	}
	else {
		cout << result2 << endl;
	}

	return 0;
}
