#include <iostream>
#include <vector>
using namespace std;
int main() {
	
	vector<int>Num = {4,5,35,25,6};
	
	for(int i=0; i<5; i++) {
		cout <<Num[i] << endl;
	}
	for(int i:Num) {
		cout << i << endl;
	}
	return 0;
}
