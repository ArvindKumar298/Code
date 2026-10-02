#include <iostream>
using namespace std;

int Sum (int Num) {
	if(Num==0){
		return 0;
	}
	int sum = 0;
	int remainder = Num%10;
	sum += remainder ;
	
	return sum + Sum(Num/10) ;
}
int main () {
	cout << Sum(123);
	return 0;
}
