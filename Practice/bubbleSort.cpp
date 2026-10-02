#include <iostream>
using namespace std;

int main() {
	int n = 4;
	int arr[n] = {4,3,2,5};
	int temp;
	for(int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if(arr[i]>arr[j]) {
				temp = arr[i];
				arr[i] = arr[j] ;
				arr[j] = temp ;
			}
		}
	}
	cout << "sorted array : ";
	for(int i=0; i<n; i++) {
		cout <<arr[i] << " " ;
	}
	
	return 0 ;
}
