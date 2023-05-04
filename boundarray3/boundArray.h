#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"
#include "invalidindex.h"
template <typename T>
class BoundArray : public SafeArray<T> {
private:
	int low_;
		
public:
	explicit BoundArray(int size = Array<T>::ARRAY_SIZE);
	BoundArray(const T *pnum, int size);
	BoundArray<T>(const BoundArray<T>& rhs);
	BoundArray(int lower, int upper); //[lower ,upper)
	~BoundArray();
	BoundArray<T>& operator=(const BoundArray<T>& rhs);
	bool operator==(const BoundArray<T>& rhs) const;
	int lower() const;
	int upper() const;
	T& operator[](int index);
	const T& operator[](int index) const;	
};

template <typename T>
BoundArray<T>::BoundArray(int size)
: SafeArray<T>(size), low_(0)
{}

template <typename T>
BoundArray<T>::BoundArray(const T *pnum, int size)
: SafeArray<T>(pnum, size), low_(0)
{}

template <typename T>
BoundArray<T>::BoundArray(const BoundArray<T>& rhs)
: SafeArray<T>( (SafeArray<T>)rhs), low_(rhs.low_)
{}

template <typename T>
BoundArray<T>::BoundArray(int lower, int upper)
: SafeArray<T>(upper-lower), low_(lower)
{}

template <typename T>
BoundArray<T>::~BoundArray()
{}

template <typename T>
BoundArray<T>& BoundArray<T>::operator=(const BoundArray<T>& rhs)
{
	this->SafeArray<T>::operator=( (SafeArray<T>)rhs);
	low_ = rhs.low_;
	return *this;
}

template <typename T>
bool BoundArray<T>::operator==(const BoundArray<T>& rhs) const
{
	return this->SafeArray<T>::operator==( (SafeArray<T>)rhs) && low_ == rhs.low_;
	//return (SafeArray)*this == (SafeArray)rhs && low_ == rhs.low_;
}

template <typename T>
int BoundArray<T>::lower() const
{
	return low_;
 }

template <typename T>
int BoundArray<T>::upper() const
{
   return low_ + this->Array<T>::size();
}

template <typename T>
T& BoundArray<T>::operator[](int index)
{
	if(index < low_ || index >= low_ + this->Array<T>::size_) {
		throw InvalidIndex(index);
	}
	return this->SafeArray<T>::operator[](index - low_);
}

template <typename T>
const T& BoundArray<T>::operator[](int index) const
{
	if(index < low_ || index >= low_ + this->Array<T>::size_) {
		throw InvalidIndex(index);
	}
	return this->SafeArray<T>::operator[](index - low_);
}
#endif
