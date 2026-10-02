#include <iostream>
using namespace std;
int main () {
	int size ;
	cin >> size ;
	int arr[size];
	for (int i=0; i<size; i++) {
		cin >> arr[i];
	}
	int element , index;
	cout << "element to delete : " ;
	cin >> element ;
	
	for(int i=0; i<5; i++) {
		if(arr[i]==element) {
			 index = i ;
		}
	}
	swap (arr[index],arr[size-1]);
	cout << arr[size-1]  << endl;
	
	size -= 1 ;
	
	cout << "updated array :";
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "size of array : " << size ; 
	
}
