
#include"Node.h"

void SinglyLinkedList::addFirst(int value) {
	//std::cout << "add first\n";
	Node* p = new Node(value, head);
	head = p;
}
