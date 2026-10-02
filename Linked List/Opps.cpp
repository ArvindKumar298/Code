#include <iostream>
#include <string>
using namespace std;

class Student{
	public :
		int roll;
		string name;
		
		void show () {
			cout <<"Roll number is " <<roll <<endl;
			cout << "Your name is " << name << endl;
			
		}
};
int main() {
	Student s;
	s.roll = 298 ;
	s.name = "Arvind";
	s.show();
	return 0;
}
