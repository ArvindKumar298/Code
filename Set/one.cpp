#include <iostream>
using namespace std;
int main() {
	
	int n;
	cin >> n;
	
	int a[n];
	
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	cout << "Before Reversing " <<endl;
	for(int i=0; i<n; i++) {
		cout << a[i] <<" ";
	}
	
	cout <<"After Reversing " << endl;
	for(int i=n; i>n; i--) {
		cout << a[i] <<" ";
	}
	
	return 0;
}


