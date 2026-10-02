#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[10];
	int len = 6;
	int lagrest = INT_MIN;
	
	for (int i=0; i<len; i++) {
		cin >> arr[i];
	}
//	for(int i=0; i<len; i++) {
//		if(arr[i]>lagrest) {
//			lagrest = arr[i];
//		}
//	}
	sort(arr,arr+len);
	for(int i=0; i<len; i++) {
		cout << arr[i] <<" " ;
	}
	cout << endl;
	cout << arr[len-2];
	
	return 0;
}

