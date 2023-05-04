#include <cassert>
#include <string>
#include <iostream>
#include "list.h"

std::ostream& operator<<(std::ostream& out, const List& rhs)
{
	return rhs.print(out);
}



List::List() {
	ptr_ = new Node;
	assert(ptr_);
	ptr_->next = NULL;
}

List::~List() {
	Node *ptr = ptr_;
	while(ptr ){
		Node *tmp = ptr;
		ptr = ptr->next;
		delete tmp;
	}
}
std::ostream& List::print(std::ostream& out, const std::string& delin) const
{
	Node *ptr = ptr_->next;
	
	while (ptr ){
		out << ptr->data; 
		out << ((ptr->next ) ? delin : "");
		//std::cout << ((p->next ) ? ", " : "");
		ptr = ptr->next;
	}
	
	return out;
	
}

void List::insertFirst(int data){
	Node *p = new Node;
	assert(p );
	p->data = data;
	p->next = ptr_->next;
	ptr_->next = p;
}
void List::insert(int prevData, int data)
{
	Node *ptr = ptr_->next;
	while (ptr ){
		if (ptr->data == prevData){
		break;
		}
		ptr = ptr->next;
	}
	if (ptr )
	{
		Node *p = new Node;
		assert(p );
		p->data = data;
		p->next = ptr->next;
		ptr->next = p;
	}
}
void List::remove(int data){
	Node *ptr = ptr_->next;
	Node *ptr2 = ptr_;
	
	while(ptr ){
		if(ptr->data == data) break;
		ptr = ptr->next;
		ptr2 = ptr2->next;
	}
	if(ptr ){
		ptr2->next = ptr->next;
		delete ptr;
	}
}
