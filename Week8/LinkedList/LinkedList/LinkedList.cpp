
#include<iostream>

struct Node {
	int data;
	Node* next;
	Node(int _data, Node* node) {
		data = _data;
		next = node;
	}
};

struct SinglyLinkedList {
	Node* head;

	SinglyLinkedList() : head(nullptr) {}
	void addFirst(int data) {
		Node* p = new Node(data, head);
		head = p;
	}
	void addLast(int data) {
		if (head == nullptr) {
			head = new Node(data, nullptr);
			return;
		}
		Node* p = head;
		while (p->next != nullptr) {
			p = p->next;
		}
		Node* tail = new Node(data, nullptr);
		p->next = tail;
	}
	void print(Node* node) {
		Node* p = node;
		while (p!= nullptr) {
			std::cout << p->data <<" ";
			p = p->next;
		}
		std::cout << std::endl;
	}

	Node* findMiddle(Node* node) {
		Node* mid = node;
		Node* tail = node->next;
		while (tail != nullptr && tail->next != nullptr) {
			mid = mid->next;
			tail = tail->next->next;
		}
		return mid;
	}

	Node* merge(Node* left, Node* right) {
		if (left == nullptr) return right;
		if (right == nullptr) return left;
		Node* result = nullptr;
		if (left->data > right->data) {
			result = right;
			result->next= merge(left, right->next);
		}
		else {
			result = left;
			result->next = merge(left->next, right);
		}
		return result;
	}

	Node* sort(Node* start) {
		if (start == nullptr || start->next == nullptr) {
			return start;
		}
		Node* mid = findMiddle(start);
		Node* next_mid = mid->next;
		mid->next = nullptr;

		Node* left = sort(start);
		Node* right = sort(next_mid);
		return merge(left, right);
	}

	Node* insert(Node* start, int value) {
		//if (start == nullptr || start->)
		Node* p = start;
		while (p->data < value && p->next != nullptr) {
			p = p->next;
		}

	}
};


int main() {
	SinglyLinkedList list;
	list.addFirst(4);
	list.addFirst(1);
	list.addFirst(3);
	list.print(list.head);
	
	list.addLast(8);
	list.addLast(2);
	list.addLast(5);
	list.print(list.head);

	list.head = list.sort(list.head);
	list.print(list.head);
	return 0;
}