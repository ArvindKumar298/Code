#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        
        

        bool check = false;

        if ((a + b <= d && c <= e) ||
            (a + c <= d && b <= e) ||
            (b + c <= d && a <= e)
            ) {
            check = true;
        }
        if (check) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
