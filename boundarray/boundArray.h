#ifndef BOUNDARRAY_H
#define BOUNDARRAY_H
#include "safeArray.h"
class BoundArray : public SafeArray {
private:
	int low_;
		
public:
	explicit BoundArray(int size = Array::ARRAY_SIZE);
	BoundArray(const int *pnum, int size);
	//BoundArray(const BoundArray& rhs);
	BoundArray(int lower, int upper); //[lower ,upper)
	//~BoundArray();
	//BoundArray& operator=(const BoundArray& rhs);
	bool operator==(const BoundArray& rhs) const;
	int lower() const;
	int upper() const;
	int& operator[](int index);
	const int& operator[](int index) const;
};


#endif
