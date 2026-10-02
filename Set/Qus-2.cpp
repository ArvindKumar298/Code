#include <iostream>
#include <set>
using namespace std;

int main() {
	// Union of a set :
	
	set<int>A = {1,2,3,4};
	set<int>B  = {3,4,5,6};
	set<int>C;
	
	set_union(A.begin(), A.end(), B.end() , inserter(C, C.begin()) );
	
	cout << C << endl;
	
}


