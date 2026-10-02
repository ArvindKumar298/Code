#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	
	vector<int>A(n);
	
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	sort(A.begin,A.end);
	
	cout << "Second Largest Number" << endl;
	cout <<A[n-2] ;
	
	return 0 ;
}
