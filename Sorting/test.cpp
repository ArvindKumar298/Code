#include <iostream>
using namespace std;
int main() {
	int m = 4 ;
	for(int i=0; i<m ; i++) {
		cout << i <<" ";
		if (i == 2) {
			break ;
		}
	}
	cout << endl;
	int n ;
	cin >> n;
	int a[n];
	
	cout << "enter an array :" <<endl;
	for(int i=0; i<n; i++) {
		cin >> a[i] ;
	}
	cout << "reversed array :" << endl;
//	for(int i=n; i>0; i--) {
//		cout << a[i] << " ";
//	}
	for(int i=n-1; i>=0; i--) {
		cout << a[i] << " ";
	}
}
