#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum;
        sort(a,a+n);
        for(int i=0; i<n; i++) {
            if(a[n-1]==a[n-2]) {
                n--;
                sum = a[n-1]+a[n-2];
            } else {
                sum = a[n-1]+a[n-2];
            }
        }
        
        cout << sum <<endl;
    }
}

