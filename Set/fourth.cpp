#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int>A(n);
	int max=0;
	
	for(int i=0; i<n; i++) {
		
		max = A[i];
		
		if(A[i]<A[i+1]) {
			max = A[i+1];
		}
	}
	cout << "Largest Number : ";
	cout << max <<endl;
	sort(A.begin , A.end) ;
	
	cout << "Second Largest Number : ";
	for(int i=n ; i>0; i--) {
		if(A[i]<max) {
			cout << A[i] << endl;
			break;
		}
	}
	
	return 0;
	
}
