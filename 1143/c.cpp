#include <iostream>
#include <cmath>
#include <vector>

#define ll long long int

#define MAX_VERTEX_COUNT 100000

using namespace std;

struct Vertex {
	ll parent;
	ll respect;
	ll children_respect;
	vector<ll> children;
};

typedef struct Vertex Vertex;

int main() {
	ll n, i, j, c;

	Vertex items[MAX_VERTEX_COUNT + 1];
	ll deleted_items[MAX_VERTEX_COUNT];

	c = 0;
	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> items[i].parent >> items[i].respect;
		items[i].children_respect = 0;
	}

	for (i = 1; i <= n; i++) {
		items[items[i].parent].children.push_back(i);

		if (items[i].respect == 1) {
			items[items[i].parent].children_respect++;
		}
	}


	for (i = 1; i <= n; i++) {
		// cout << "debug " << i << " " << items[i].parent << " " <<  items[i].respect << " " << items[i].children.size() << " " << items[i].children_respect << endl;

		if (items[i].parent != -2 && items[i].respect == 1 && items[i].children.size() == items[i].children_respect) {
			for (j = 0; j < items[i].children.size(); j++) {
				items[items[i].children.at(j)].parent = items[i].parent;

				if (items[items[i].children.at(j)].respect == 0) {
					items[items[i].parent].children_respect--;
				}
			}

			items[i].parent = -2;
			deleted_items[c] = i;
			c++;
		}
	}

	if (c == 0) {
		cout << -1 << endl;
		return 0;
	}

	 
	for (i = 0; i < c; i++) {
		cout << deleted_items[i];

		if (i < c - 1) {
			cout << " ";
		}
	}
	
	cout << endl;

	return 0;
}
