#include <iostream>
using namespace std;

void Num(int N) {
	if(N==0) {
		return;
	}
	cout << N <<" ";
	Num(N-1) ;
	

}
int main() {
	Num(15);
	
	return 0 ;
}
