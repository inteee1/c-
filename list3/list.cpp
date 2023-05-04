#include <cassert>
#include <string>
#include <iostream>
#include "list.h"
/*
Node *createNode(int data, Node *next)
{
	Node *p = new Node;
	assert(p );
	p->data = data;
	p->next = next;
	
	return p;

}
*/
Node::Node(int data, Node *next)
: data_(data), next_(next)
{
	
}


std::ostream& operator<<(std::ostream& out, const List& rhs)
{
	return rhs.print(out);
}



List::List() {
	
	//ptr_ = createNode(-1, NULL);
	ptr_ = new Node(-1,NULL);
	
}

List::~List() {
	Node *ptr = ptr_;
	while(ptr ){
		Node *tmp = ptr;
		ptr = ptr->next_;
		delete tmp;
	}
}
std::ostream& List::print(std::ostream& out, const std::string& delin) const
{
	Node *ptr = ptr_->next_;
	
	while (ptr ){
		out << ptr->data_; 
		out << ((ptr->next_ ) ? delin : "");
		//std::cout << ((p->next ) ? ", " : "");
		ptr = ptr->next_;
	}
	
	return out;
	
}

void List::insertFirst(int data){
	
	ptr_->next_ = new Node(data, ptr_->next_);
	
}
void List::insert(int prevData, int data)
{
	Node *ptr = ptr_->next_;
	while (ptr ){
		if (ptr->data_ == prevData){
		break;
		}
		ptr = ptr->next_;
	}
	if (ptr )
	{
		
		ptr->next_ = new Node(data, ptr->next_);
	}
}
void List::remove(int data){
	Node *ptr = ptr_->next_;
	Node *ptr2 = ptr_;
	
	while(ptr ){
		if(ptr->data_ == data) break;
		ptr = ptr->next_;
		ptr2 = ptr2->next_;
	}
	if(ptr ){
		ptr2->next_ = ptr->next_;
		delete ptr;
	}
}
