
#ifndef NODE_H
#define NODE_H

#include<iostream>


struct  Node {
	int data;
	Node* next;
	Node(int value, Node* node) {
		data = value;
		next = node;
	}
	~Node() {
		delete next;
	}
};

struct SinglyLinkedList {
	Node* head;
	void print();
	void addFirst(int value);
	void addLast(int value);
};

#endif NODE_H