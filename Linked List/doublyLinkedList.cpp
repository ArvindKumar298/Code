#include <iostream>
using namespace std;

class Node {
	public :
		int data;
    	Node* next;
    	Node* prev;

    // Constructor
    	Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
    
    
};

int main() {
	// create the first node (head of the list )
	Node*head = new Node(10);
	
	// create and link the second node 
	head->next = new Node(20);
	head->next->prev = head;
	
	// create and link the third node
	head->next->next = new Node(30);
	head->next->next->prev = head->next;
	
	// create and link the fourth node
	head->next->next->next = new Node(40);
	head->next->next->next->prev = head->next->next;
	
	// Travese the list forword and print elements
	Node*temp = head;
	while(temp!= nullptr) {
		cout << temp->data;
		if(temp->next != nullptr) {
			cout << "<->";
		}
		temp = temp->next;
	}
}

