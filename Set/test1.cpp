#include <iostream>
#include <set>
using namespace std ;

int main() {
	set<int>s = {1,2,3,4,5,6};
	
	cout << accumulate(s.begin(),s.end(),0) ;
	return 0 ;
}
