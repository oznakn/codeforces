#include <iostream>
#include <cmath>

#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, r;

    cin >> n >> r;

    double val = cos(double(360/n) * 3.14159265359 / 180);
    cout << val << endl;
    val = sqrt(1 - val);
    cout << val << endl;

    cout << r * val / (sqrt(2) - val);

    return 0;
}