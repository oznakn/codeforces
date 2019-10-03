#include <iostream>

#define ll long long int

#define MAX_PAGES 10000

using namespace std;

int main() {
	ll n, i;
	ll pages[MAX_PAGES + 1];
	ll days = 0;
	ll left = 1;
	ll max_wait;

	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> pages[i];
	}

	while (left <= n) {
		days++;
		max_wait = -1;

		for (i = left; i <= n; i++) {
			if (pages[i] > max_wait) {
				max_wait = pages[i];
			}

			if (i >= max_wait) {
				left = i + 1;
				break;
			}	
		}
	}

	cout << days << endl;
}
