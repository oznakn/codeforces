#include <iostream>

#define ll long long int

using namespace std;


int main() {
    ll n, a, x, b, y;

    cin >> n >> a >> x >> b >> y;
    
    while (true) {
       if (a == b) {
           cout << "YES";           
           break;
       }

       if (a == x || b == y) {
           cout << "NO";
           break;
       }


       a++;
       b--;

       if (a == n+1) {
           a = 1;
       }

       if (b == 0) {
           b = n;
       }
    }

    return 0;
}
