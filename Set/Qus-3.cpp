#include <bits/stdc++.h>
using namespace std;

int main() {
	int M , N ;
	cin >> M >> N ;
	
	vector<int>A1(M);
	set<int>B1;
	
	for(int i=0; i<M; i++) {
		cin >> A1[i];
		B1.insert(A1[i]);
	}
	
	vector<int>A2(N);
	set<int>B2;
	
	for(int i=0; i<N; i++) {
		cin >> A2[i];
		B2.insert(A2[i]);
	}
	
	set<int>C1;
	set<int>C2;
	
	set_difference(B1.begin(),B1.end(),
	              B2.begin(),B2.end(),
				  inserter(C1, C1.begin()));
	
	set_difference(B2.begin(),B2.end(),
	              B1.begin(),B1.end(),
				  inserter(C2, C2.begin()));
	
	int product = C1.size()*C2.size();
	
	for(int x : C1) {
	    cout << x << " " ;
	}
	cout << endl;
	
	for(int x : C2) {
	    cout << x << " ";
	}
	
	cout << endl;
	
	cout << product << endl;
}

