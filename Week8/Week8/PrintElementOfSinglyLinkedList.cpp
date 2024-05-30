
#include"Node.h"

void SinglyLinkedList::print() {
	std::cout << "print\n";
	Node* p = head;
	while (p != nullptr) {
		std::cout << p->data<<" ";
		p = p->next;
	}
}
