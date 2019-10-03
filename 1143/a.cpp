#include <iostream>

#define ll long long int
#define MAX_DOOR_COUNT 200000

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, i, c;
	ll left_count = 0;
	ll right_count = 0;
	unsigned int doors[MAX_DOOR_COUNT];

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> doors[i];

		if (doors[i] == 0) {
			left_count++;
		}
	       	else {
			right_count++;
		}
	}

	for (i = 0; i < n; i++) {
		if (doors[i] == 0) {
			left_count--;
		}
		else {
			right_count--;
		}
		c++;

		if (left_count == 0 || right_count == 0) {
			break;
		}
	}
	
	cout << c << endl;

	return 0;
}

