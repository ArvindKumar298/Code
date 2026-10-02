#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	cout << "Enter an arrany :" << endl;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=1; i<=n-1; i++) {
		int j = i;
		while (j>0 && a[j-1]>a[j]) {
//			int temp = a[j];
//		    a[j] = a[j-1];
//			a[j-1] = temp ;
			swap(a[j-1],a[j]);
			j-- ;
		}
	}
	cout << "sorted array : " << endl;
	for (int i=0; i<n; i++) {
		cout <<a[i] <<" ";
	}
	return 0;
}
