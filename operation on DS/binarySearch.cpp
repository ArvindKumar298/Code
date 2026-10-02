#include <iostream>
using namespace std;
int main() {
	int n,i,pos=-1,mid,beg,end;
	cin>>n;
	
	int a[n];
	beg=0;
	end=n-1;
	
	for(i=0, i<n; i++){
		cin >> a[i];
		
	}
	cout <<"enter number which";
	cin>>num;
	
	mid = (beg+end)/2;
	
	while(beg<=end){
		
		if(a[mid]==num){
			pos=mid;
			break;
		} else if (a[mid]<num) {
			beg = mid+1;
		} else {
			end = mid -1;
			mid = (beg+end)/2;
		}
	}
	if(pos==-1){
		cout << "element is not prenest in array"
	} eles {
		cout << " " << "is foound  at " << pos+1 << "position"
	}
}
