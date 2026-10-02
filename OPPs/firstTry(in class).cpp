#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node* next ;
	Node(int val) {
		data = val;
		next = nullptr;
	}	
	
};

Node* createNode(int val) {
	Node* newNode = new Node(val);
	return newNode;
}

int main() {
	int val;
	cin>> val;
	
	Node* node = createNode(val);
	
	cout << "node created successfully !" << endl;
	
	cout << "Data = " << node->data  <<endl;
	cout << "Next = " << node->next <<endl;
	
	return 0;
}
