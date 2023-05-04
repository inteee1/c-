//#include <stdio.h>
//#include <stdlib.h>
#include <cassert>
#include "queue.h"


void Queue::push(int data)
{
	assert(this->rear != this->size);
	this->pArr[this->rear] = data;
	++this->rear;
}

int Queue::pop()
{
	assert(this->rear != this->front);
	this->i = this->front;
	++this->front;
	return this->pArr[this->i];
}

Queue::Queue(int size)
{
	//pq->pArr = malloc(sizeof(int) * size);
	this->pArr = new int[size];
	assert(this->pArr /*!= NULL*/);
	this->size = size;
	this->front = 0;
	this->rear = 0;
}

Queue::~Queue() {
	//free(pq->pArr);
	delete [] this->pArr;
}

