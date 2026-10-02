#include <iostream>
using namespace std;
int main() {
	int N 
	cin >> N;
	
	int A[N];
	
	for(int i=0; i<N; i++) {
		cin >> A[i] ;
	}
	
	cout << "The element of array" << endl;
	for(int i=0; i<N; i++) {
		cout << A[i] << " "; 
	}
}
