#include <bits/stdc++.h>
using namespace std;

bool Soln(int n ,int target) {
	
	vector<int>nums(n);
	for(int i=0; i<n; i++) {
		cin >> nums[i];
	}
	
	unordered_set<int> s;
	
	for(int x : nums) {
		
		int y = target-x;
		if (s.find(y) != s.end()) {
			return true;
		}
		s.insert(x);
	}
	return false;
}

int main() {
	
	int n;
	cin >> n;
	
	int target;
	cin >> target;
	
	cout << Soln(4,-2) ;
	
	return 0 ;
}
