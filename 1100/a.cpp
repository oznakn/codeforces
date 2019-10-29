#include <iostream>

using namespace std;

int abs(int a, int b) {
    if (a > b) return a - b;
    return b - a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    int tabs[n];

    for (int i = 0; i < n; i++) {
        cin >> tabs[i];
    }

    int currMax = 0;

    for (int b = 1; b <= n; b++) {
        int testTabCount = 0;
        int socialTabCount = 0;

        for(int i = 0; i < n; i++) {
            if ((i+1-b) % k != 0) {
                if (tabs[i] == 1) testTabCount++;
                else socialTabCount++;
            }
        }

        int newMax = abs(testTabCount, socialTabCount);

        if (newMax > currMax) currMax = newMax;
    }

    cout << currMax;

    return 0;
}