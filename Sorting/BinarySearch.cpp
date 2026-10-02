#include <iostream>
using namespace std;
int main() {
	int n =7;
	int arr[7]={-1,0,3,4,5,9,12};
	int target = 34;
	
	int st =0 , end = n-1;
	while(st<=end) {
		int mid = (st+end)/2;
		if(target>arr[mid]){
			st = mid+1;
		} else if (target<arr[mid]) {
			end = mid-1;
		} else {
			cout << arr[mid] ;
			break;
		}
	}
	return -1;
}
