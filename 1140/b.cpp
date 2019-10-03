#include <iostream>
#include <string>
#include <vector>

#define MAX_STR_LEN 100

using namespace std;

int main() {
	int n, x, i, j, r;
	char s[MAX_STR_LEN];

	cin >> n;

	vector<int> results;

	for (i = 0; i < n; i++) {
		cin >> x;
		cin >> s;
		r = x;

		for (j = 0; j < x; j++) {
			if (s[j] == '>' && j != x - 1) {
				r--;
			}
			else if (s[j] == '<' && j != 0) {
				r--;
			}
		}

		results.push_back(r > 0 ? r - 1 : r);
	}

	for (i = 0; i < results.size(); i++) {
		cout << results[i] << endl;
	}
}
