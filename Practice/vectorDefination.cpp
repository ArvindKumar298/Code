#include <iostream>
#include <algothims>
using namespace std;

int main() {
	int N;
	cin>>N;
	vector<int>A ;
	N= A.size();
	
	for(int i=0; i<N; i++) {
		cin>>A[i];
	}
	for(int i=0; i<N; i++) {
		cout<<A[i]<<" ";
	}
}
