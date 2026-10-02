#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int target ;
    cin >> target ;
    int nums[n];
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    for(int i=0; i<n; i++) {
        if(nums[i]+nums[i+1] == target) {
            cout << i << " " <<i+1 ;
            break;
        } else {
            return -1;
        }
    }
   
}
