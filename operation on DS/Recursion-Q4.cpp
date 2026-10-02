#include <iostream>
using namespace std;

void revesed_array (int size) {
	int arr[size] = {1,2,3,4,5};
	if(size<0) {
		return ;
	}
	cout << arr[size] << " ";
	revesed_array(size-1);
}
int main() {
	revesed_array(5);
	return 0;
}
