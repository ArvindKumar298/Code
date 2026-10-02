#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>Num = {1,2,3};
	cout << "Size of Num is " << Num.size() << endl;
	
	for (int i=0; i<5; i++) {
		Num.push_back(i+5);
	}
	
	cout << "Updated Size of Num is " << Num.size() <<endl;
	
	for(int val: Num) {
		cout << val << " ";
	}
	
	cout << endl;
	
	vector<int>Sum = {12,34,56,67,32};
	
	for(int i=0; i<3; i++) {
		Sum.pop_back();
	}
	
	cout << "Updated Sum vector : ";
	for(int val : Sum) {
		cout << val << " " ;
	}
	
	cout << endl;
	
	cout << "Print Front,Back and at value of Num : " <<endl;
	cout << Num.front() << endl;
	cout << Num.back() << endl;
	cout << Num.at(4) << endl;
	
	// Capacity of vector :
	
	cout << "The Capacity of vector Num is " ;
	cout << Num.capacity() << endl;
}

