#include <iostream>
using namespace std;

// singly linked list node structure
class Node {
	public :
		int data;
		Node* next;
		
		//constrctor to initialize  a new node with data
		Node (int new_data) {
			this->data = new_data;
			this->next = nullptr;
		}
};
int main() {
	
	// link the first node
	Node* head = new Node(10);
	
	// link the second node 
	head->next = new Node(20);
	
	// link the third node 
	head->next->next = new Node (30);
	
	// link the fourth node 
	head->next->next->next = new Node (40);
	
	// printing linked list 
	Node* temp = head;
	while (temp != nullptr){
		cout << temp->data << " ";
		temp = temp->next;
	} 
	
}
