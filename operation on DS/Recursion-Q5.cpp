#include <iostream>
using namespace std;

int factorial(int Num) {
	if (Num<=0) {
		return 1;
	}
	return Num * factorial(Num-1);
}
int main() {
	int Num ;
	cin >> Num ;
	cout << "factorial of " << Num << " is " << factorial(Num);
	return 0 ;
}

