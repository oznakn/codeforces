#include <iostream>

using namespace std;

int main() {
    int T;

    cin >> T;

    for (int k = 0; k < T; k++) {
        int n;
        cin >> n;

        int items[n][3];
        int group1Count = 0;
        int group2Count = 0;

        for (int j = 0; j < n; j++) {
            cin >> items[j][0] >> items[j][1];
            items[j][2] = 0;
        }

        items[0][2] = 1;
        group1Count++;

        for (int j = 1; j < n; j++) {
            int group1 = 0;
            int group2 = 0;

            for (int k = 0; k < n; k++) {
                if (items[k][2] != 0) {
                    if (items[k][2] == 1 && (items[k][0] == items[j][0] || items[k][1] == items[j][1])) {
                        group1++;
                    }

                    if (items[k][2] == 2 && (items[k][0] == items[j][0] || items[k][1] == items[j][1])) {
                        group2++;
                    }
                }
            }

            if (group1 == 0 && group2 == 0) {
                if (group2Count == 0) {
                    items[j][2] = 2;
                    group2Count++;
                }
                else {
                    items[j][2] = 1;
                    group1Count++;
                }
            }
            else if (group1 != 0 && group2 == 0) {
                items[j][2] = 1;
                group1Count++;
            }
            else if (group2 != 0 && group1 == 0) {
                items[j][2] = 2;
                group2Count++;
            }
            else {
                cout << "-1" << endl;
                return 0;
            }
        }

        if (group1Count != 0 && group2Count != 0) {
            for (int j = 0; j < n; j++) {
                cout << items[j][2];

                if (j < n - 1) {
                    cout << " ";
                }
            }

            cout << endl;
            return 0;
        }
        else {
            cout << "-1" << endl;
            return 0;
        }
    }

    return 0;
}