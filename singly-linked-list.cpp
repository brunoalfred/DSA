#include <iostream>

using namespace std;

class Node
{
public:
	 int data;
	Node * next;
	
};

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

	cout << "First Node \n" << head -> data << endl;
	cout << head->next << endl;

	cout << "Second Node \n" << second->data << endl;
	cout << second->next << endl;

	cout << "Third Node \n" << third -> data << endl;
	cout << third->next << endl;
	
	return 0;
}