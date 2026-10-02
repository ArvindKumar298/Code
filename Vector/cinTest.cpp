#include <iostream>
using namespace std;
int main () {
	int N;
	cin >> N;
	int A[N];
	
	for (int i=0; i<N; i++) {
		cin >> A[i];
		cout << A[i]+10  << endl;
	}
	
	return 0;
}
