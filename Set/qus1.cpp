#include <iostream>
#include <set>
using namespace std;

int main() {
	int n = 11;
	
	int arr[n] = {10,2,3,4,2,5,6,4,2,3,6};
	
	set<int>S;
	
	for(int i=0; i<n; i++) {
		S.insert(arr[i]);
	};
	
	for(int x: S) {
		cout << x << " ";
	}
	cout << endl;
	cout <<  S.size(); 
}
