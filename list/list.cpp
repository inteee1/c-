#include "list.h"
//#include <stdlib.h>
//#include <stdio.h>
#include <cassert>
#include <iostream>

static Node *createNode(int data, Node *next){
	Node *p = new Node;
	assert(p );
	p->data = data;
	p->next = next;
	
	return p;
}

List::List() {
	this->ptr = createNode(-1, nullptr);
}

List::~List() {
	Node *p = this->ptr;
	while(p){
		Node *tmp = p;
		p = p->next;
		delete tmp;
	}
}
void List::printList(){
	Node *p = this->ptr->next;
	std::cout << "[";
	while (p ){
		std::cout << p->data << "";
		//if(p->next != nullptr)
		//std::cout << ", ";
		//else
		//std::cout << "";
		
		std::cout << ((p->next ) ? ", " : "");
		p = p->next;
	}
	std::cout << "]" << std::endl;
	
}

void List::insertFirstNode(int data){
	this->ptr->next = createNode(data, this->ptr->next);
}
void List::insertNode(int prevData, int data){
	Node *p = this->ptr->next;
	while (p ){
		if (p->data == prevData){
		break;
		}
		p = p->next;
	}
	if (p ){
		p->next = createNode(data, p->next);
	}
}
void List::deleteNode(int data){
	Node *p = this->ptr->next;
	Node *p2 = this->ptr;
	
	while(p ){
		if(p->data == data) break;
	p = p->next;
	p2 = p2->next;
	}
	if(p ){
		p2->next = p->next;
		delete p;
	}
}
