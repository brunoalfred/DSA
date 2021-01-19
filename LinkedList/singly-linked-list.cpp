#include <iostream>

using namespace std;

class Node
{
public:
	int data;
	Node * next;


};

// Writing a Functin to Traverse the Linked List
void printList(Node *n)
{
	while (n != NULL)
	{
		/* code */
		cout << n->data << "\n";
		n = n->next;
	}
}


// Add a new Node to the Linked List
void push(Node** head_ref, int new_data){

	// 1.Create an new Node
	Node* new_node = new Node();
	// 2.Store data to the Node
	new_node -> data = new_data;
	// 3.Make the next of new_node have address of previous head
	new_node -> next = (*head_ref);
	// 4.move the head to point to the new node */
	(*head_ref) = new_node;
}

//  Inserting A new Node in the Linked List

void insertAfter (Node* prev_node, int new_data){

	// 1. Check if the given prev_node is NULL
	if(prev_node == NULL){
		cout << "The previous pointer cannot be NULL" ;
		return ;
	}

	// 2. Allocate new node
	Node* new_node = new Node();

	// 3. Put in the data
	new_node -> data = new_data;

	// 4. Make next of new node as next of prev_node
	new_node -> next = prev_node -> next;

	// 5. move the next of prev_node  as new_node
	prev_node -> next = new_node;

}


int main(int argc, char const *argv[])
{
	/* code */
	
	// Creating pointer for our nodes
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// Allocating the heap from the memory
	head = new Node();
	second = new Node();
	third = new Node();

	//Creating first Node
	head -> data = 1;
	head -> next = second;

	//Creating second Node
	second -> data = 2;
	second -> next = third;

	//Creating third Node
	third -> data = 3;
	third -> next = NULL;

	//  Added to head of Linked List
	push(&head, 5);
	// Adding in between Nodes
	insertAfter(second, 6);
	printList(head);
	

	return 0;

}