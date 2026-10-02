#include <iostream>
#include <string>
using namespace std;

class Teacher {
	private:
		int salary ;
	public :
	// properties :
	string name;
	string dept;
	string subject;
	
	
	// methodes
	void changeDept(string newDept) {
		dept = newDept;
	}
	
	// Setter
	void setsalary(int s) {
		salary = s ;
	}
	
	// getter
	int  getsalary() {
		return salary;
	}
};

int main() {
	Teacher t1;          // object creation
	t1.name = "ARvind Yadav";
	t1.dept = "cse";
	t1.subject = "c++";
	t1.setsalary(50000);
	
	cout << t1.name << endl;
	cout << t1.getsalary() << endl;
	return 0;
}
