#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int>A(n);
	vector<int>B(n);
	
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	for(int i=0; i<n; i++) {
		cin >> B[i];
	}
	
	for(int i=0; i<n; i++) {
		cout << A[i]+B[i] << " " ;
	}
	
	return 0;
}
