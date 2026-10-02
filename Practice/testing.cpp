#include <iostream> 
using namespace std;

int main() {
	
	string s  = "Arvind";
	
	char ch = s.at(2);
	cout << ch <<endl;
	
	char ch2 = 97;
	cout << ch2 << endl;
	
	char ch3 = s.at(3)-'a';
	
	char ch4 = 'z'-ch3;
	
	cout << ch4 <<endl;
}
