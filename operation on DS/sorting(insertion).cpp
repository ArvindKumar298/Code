#include <iostream>
using namespace std;
int main() {
	int n = 5;
	int arr[n] = {9,4,5,0,3};
	
	for(int i=1; i<n; i++) {
		int cur = arr[i];
		int pre = i-1;
		
		while(pre>=0 && arr[pre]>cur) {
			arr[pre+1] = arr[pre];
			pre--;
		}
		arr[pre+1] = cur;
 	}
 	cout << "Sorted array : ";
 	for(int i=0; i<n; i++ ) {
 		cout << arr[i] << " " ;
	}
	return 0 ;
	 
}
