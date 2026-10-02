#include <iostream>
using namespace std;
int main() {
	int n = 4;
	int arr[n] = {4,3,2,5};
	int min  ;
	
	for(int i=0; i<n; i++) {
		min = i ;
		for(int j=i+1; j<n; j++) {
			if(arr[j]<arr[min]) {
				min = j;
			}
		}
		int temp = arr[min] ;
			arr[min] = arr[j] ;
			arr[j] = temp ;
	}
	cout << "sorted array : ";
	for(int i=0; i<n; i++) {
		cout <<arr[i] << " " ;
	}
	
	return 0 ;
}
