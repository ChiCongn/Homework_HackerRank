
#include"Node.h"

void SinglyLinkedList::addLast(int value) {
	std::cout << "add last\n";
	if (head == nullptr) {
		head = new Node(value, nullptr);
		return;
	}
	Node* p = head;
	while (p->next != nullptr) {
		p = p->next;
	}
	p->next = new Node(value, nullptr);	
}

