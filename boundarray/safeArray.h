#ifndef SAFEARRAY_H
#define SAFEAARAY_H
#include "array.h"

class SafeArray : public Array {
private:
	//static const int SAFEARRAY_SIZE;
public:
	explicit SafeArray(int size = Array::ARRAY_SIZE);
	SafeArray(const int *pnum, int size);
	/*SafeArray(const SafeArray& rhs);
	~virtual SafeArray();
	SafeArray& operator=(const SafeArray& rhs);*/
	bool operator==(const SafeArray& rhs) const;
	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;
};

#endif
