#include <iostream>
using namespace std;

int main() {
	int arr[6] = {10,20,30,40,50};
	int n=5;
	cout <<"original array : ";
	for(int i=0; i<n; i++) {
		cout << arr[i] <<" ";
	}
	cout << endl;
	int elemet_to_add;
	
	for(int i=n; i>0; i--) {
		arr[i] = arr[i-1];
	}
	
	arr[0] = elemet_to_add;
	
	// Print the array 
	cout << "updated array : ";
	for (int i=0; i<=n; i++) {
		cout << arr[i] << " ";
	}
	cout <<endl;
}
