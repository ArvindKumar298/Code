#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string S1;
    cin >> S1;

    string S2;
    cin >> S2;

    set < char > M1;
    set < char > M2;

    set < char > C1;

    for (int i = 0; i < n; i++) {
        M1.insert(S1[i]);
    }

    for (int i = 0; i < m; i++) {
        M2.insert(S2[i]);
    }

    set_intersection(M1.begin(), M1.end(),
        M2.begin(), M2.end(),
        inserter(C1, C1.begin()));
    
    for(char x : C1) {
        cout << x << " " ;
    }
    
    cout << endl;
    
    cout << C1.size() << endl;
}
