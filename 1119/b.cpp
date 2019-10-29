#include <iostream>
#include <cmath>

#define ll long long int

#define MAX_BOTTLE 1000

using namespace std;

int main() {
	ll i, n, h, result, left_height, right_height;
	ll bottles[MAX_BOTTLE];
	int left_pass, right_pass;

	cin >> n >> h;

	for (i = 0; i < n; i++) {
		cin >> bottles[i];
	}

	left_height = h;
	right_height = h;
	left_pass = 1;
	right_pass = 1;

	result = 0;

	for (i = 0; i < n; i++) {
		cout << "debug " << left_height << " " << right_height << endl;
		if (left_pass == 1 && bottles[i] <= left_height) {
			left_height -= bottles[i];
			left_pass = 0;
			result++;
		}
		else if (right_pass == 1 && bottles[i] <= right_height) {
			right_height -= bottles[i];
			right_pass = 0;
			result++;
		}
		else if (left_pass == 0 && right_pass == 0) {
			if (left_height > right_height) {
				left_height = right_height;
			}
			else {
				right_height = left_height;
			}

			left_pass = 1;
			right_pass = 1;
		}
		else {
			break;
		}
	}
	
	cout << result << endl;

	return 0;
}
