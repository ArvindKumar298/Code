#include <iostream>
using namespace std;
int main() {
	int n,pos,min,t ;
	
	cout << "size of the array :";
	cin >>n;
	
	int a[n];
	
	cout <<"Enter an array : " <<endl;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(i=0; i<n-1; i++) {
		min = a[i];
		pos = i ;
		for(int j=i+1; j<n; j++) {
			if(a[j]<min) {
				min = a[j];
				pos = j ;
			}
		}
		t = a[i];
		a[]
	}
	
}
