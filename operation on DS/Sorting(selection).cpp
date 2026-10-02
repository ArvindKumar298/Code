#include <iostream>
using namespace std;
int main () {
	int n=6;
	int arr[n] = {9,8,7,6,5,4};
	
	for(int i=0; i<n; i++) {
		int minIdx = i ;
		
		for(int j=i+1; j<n; j++) {
			if(arr[minIdx]>arr[j]) {
				minIdx = j;
			}
		}
		int temp = arr[minIdx];
			arr[minIdx] = arr[i];
			arr[i] = temp;
		
	}
	cout << "Sorted array : ";
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0 ;
}
