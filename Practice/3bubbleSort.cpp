#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector < int > p(n);
        
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        
        int count = 0;

        if (p[0] == 1 && p[n - 1] == n) {
            cout << 0 << endl;

        } else if (p[0] == 1 && p[n - 1] != n) {

            for (int i = 1; i < n; i++) {

                for (int j = i + 1; j < n; j++) {

                    if (p[i] > p[j]) {
                        swap(p[i], p[j]);
                        count++;

                        if (p[n - 1] == n) {
                            break;
                        }
                    }
                }

            }
            
        } else if(p[0]!=1 && p[n-1]==n) {
            
            for(int i=0; i<n-1; i++) {
                
                for(int j=i+1; j<n-1; j++) {
                   
                    if (p[i] > p[j]) {
                        swap(p[i], p[j]);
                        count++;

                        if (p[0] == 1) {
                            break;
                        }
                    }
                }
            }
            
        } else if(p[0]!=1 && p[n-1]!=n) {
            
            for(int i=0; i<n; i++) {
                
                for(int j=i+1; j<n; j++) {
                    
                    if (p[i] > p[j]) {
                        swap(p[i], p[j]);
                        count++;

                        if (p[0] == 1 && p[n-1] == n) {
                            break;
                        }
                    }
                }
            }
        }
        
        cout << count << endl;
    }

}
