#include <iostream>
#include <string>
using namespace std;

class Sum{
	public :
		int a , b , sum ;
		
		void Input () {
			cout << "value a is " ;
			cin>> a;
			cout << "value b is " ;
			cin>> b;
		}
		void Calculation () {
			sum = a + b; 
		}
		void Result () {
			cout << "sum of two no.s is " << sum;
		}
		
};
int main() {
	Sum s;
	s.Input();
	s.Calculation();
	s.Result();
	return 0 ;
}
