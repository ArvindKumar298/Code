#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>Num = {1,2,3,4,5} ;
	cout << Num[2] << endl;
	
	// Storing same value at every indices :
	vector<int>Same(5,9);
	for (int i=0; i<5; i++) {
		cout << Same[i] << " ";
	}
	cout << endl;
	 
	// We can also use for each loop to access element :
	for (int val:Num) {
		cout << val << " ";
	}
	cout << endl;
	
	// Vector Functions :
	
	cout << "Size of vector Same : " ;
	cout << Same.size() <<endl;
	
	cout << "Adding element from back :" << endl;
	Num.push_back(6);
	cout << "Size of Num is " << Num.size() << endl;
	for(int val: Num) {
		cout << val << " ";
	}
	
	return 0;
}
