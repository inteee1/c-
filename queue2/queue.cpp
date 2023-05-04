#include <cassert>
#include "queue.h"



void Queue::push(int data)
{
	assert(!isFull());
	pArr_[rear_] = data;
	++rear_;
}

int Queue::pop()
{
	assert(!isEmpty());
	int i = front_;
	++front_;
	return pArr_[i];
}

Queue::Queue(int size)
: pArr_(new int[size]), size_(size), front_(0), rear_(0)
{
	assert(pArr_ );

}

Queue::~Queue() 
{
	delete [] pArr_;
}

bool Queue::isFull() const
{
	return front_ == size_;
}

bool Queue::isEmpty() const
{
	return front_ == rear_;
}

