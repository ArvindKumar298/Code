#include <iostream>
using namespace std;
int main() {
	int N ;
	cin >> N ;
	int flag = 0;
	
	for(int i=2; i*i<=N; i++) {
		if(N%i==0) {
			flag = 1;
			break;
		}
	}
	if(flag==1) {
		cout << "non prime number";
	} else {
		cout << "prime number";
	}
	return 0;
}
