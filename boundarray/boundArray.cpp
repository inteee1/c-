#include "boundArray.h"

BoundArray::BoundArray(int size)
: SafeArray(size), low_(0)
{}
BoundArray::BoundArray(const int *pnum, int size)
: SafeArray(pnum, size), low_(0)
{}
/*
BoundArray::BoundArray(const BoundArray& rhs)
: SafeArray( (SafeArray)rhs), low_(rhs.low_)
{}
*/
BoundArray::BoundArray(int lower, int upper)
: SafeArray(upper - lower), low_(lower)
{}
/*
BoundArray::~BoundArray()
{}

BoundArray& BoundArray::operator=(const BoundArray& rhs)
{
	this->SafeArray::operator=( (SafeArray)rhs);
	low_ = rhs.low_;
	return *this;
}
*/
bool BoundArray::operator==(const BoundArray& rhs) const
{
	return this->SafeArray::operator==( (SafeArray)rhs) && low_ == rhs.low_;
	//return (SafeArray)*this == (SafeArray)rhs && low_ == rhs.low_;
}
int BoundArray::lower() const
{
	return low_;
 }
int BoundArray::upper() const
{
   return low_ + this->Array::size();
}

int& BoundArray::operator[](int index)
{
	return this->SafeArray::operator[](index - low_);
}
const int& BoundArray::operator[](int index) const
{
	return this->SafeArray::operator[](index - low_);
}
