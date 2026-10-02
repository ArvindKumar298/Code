#include <iostream>
using namespace std;

int print_Num(int N) {
	if(N==0) {
		return 0;
	}
	cout << N <<" ";
	print_Num(N-1);
}
int main() {
	print_Num(10);
}
