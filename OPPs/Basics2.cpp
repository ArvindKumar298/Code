#include <iostream>
#include <vector>
using namespace std;

class Account {
	private:
		double balance;
		string password;
	public:
		string accountId;
		string username;
	Account() {
		cout <<"This is constructor calling automatically"
		 <<endl;
	}
	void critcal_info() {
		balance = 125000;
		password = "#Arvind_298";
	}
	int get_info() {
		return balance;
	}
	
};
int main() {
	Account A1;
	A1.critcal_info();
	A1.username = "Arvind";
	cout << A1.username << endl;
	cout <<A1.get_info() << endl;
	
	
}
