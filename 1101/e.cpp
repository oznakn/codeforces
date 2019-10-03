#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int totalx = 0;
    int totaly = 0;

    for (int k = 0; k < n; k++) {
        char c;
        int v1, v2;

        cin >> c >> v1 >> v2;

        if (c == '+') {
            if (v1 > v2) {
                if (v1 > totalx) totalx = v1;
                if (v2 > totaly) totaly = v2;
            }
            else {
                if (v2 > totalx) totalx = v2;
                if (v1 > totaly) totaly = v1;
            }
        }
        else if (c == '?') {
            if (v1 > v2) {
                if (totalx <= v1 && totaly <= v2) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
            else {
                if (totalx <= v2 && totaly <= v1) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }

        }
    }

    return 0;
}