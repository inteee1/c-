#include <cassert>
#include "array.h"
#include "queue.h"


Queue::Queue(int size)
: arr_(size), front_(0), rear_(0)
{}
/*
Queue::Queue(const Queue& rhs)
: arr_(rhs.arr_), front_(rhs.front_), rear_(rhs.rear_)
{}

Queue::~Queue() 
{
	delete [] pArr_;
}

Queue& Queue::operator=(const Queue& rhs)
{
	arr_ = rhs.arr_;
	front_ = rhs.front_;
	rear_ = rhs.rear_;
	
	return *this;
}

*/
void Queue::push(int data)
{
	assert(!isFull());
	arr_[rear_] = data;
	//++rear_;
	rear_ = (rear_ + 1) % arr_.size();
}

int Queue::pop()
{
	assert(!isEmpty());
	int index = front_;
	//++front_;
	front_ = (front_ + 1 ) % arr_.size();
	return arr_[index];
}




bool Queue::isFull() const
{
	//return rear_ == size_;
	return (rear_ + 1) % arr_.size() + 1 == front_;
}

bool Queue::isEmpty() const
{
	return front_ == rear_;
}

