#include <iostream>
using namespace std;

int main () {
	int n = 5;
	int arrA[n] = {4,5,4,1,0};
	
	
	int max = arrA[0] ;
	for(int i=0; i<n; i++) {
		
		if(max<arrA[i]) {
			max = arrA[i];
		}
	}
	cout << max;
	
	int freq[max] = {0};
	
	for (int i=0; i<max; i++) {
		freq[i] = freq [arrA[i]];
	}
	
	for(int i=1; i<=max; i++) {
		freq += freq[i-1];
	}
	
	int arrB[n];
	
	for (int i=n; i>0; i--) {
		arrB[--freq[arrA[i]]] = arrB[i];
	}
}
