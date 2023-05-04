#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
	int *pArr_;
protected: 
	static const int ARRAY_SIZE;

	int size_;
	
public:
	// Array& *operator&() { return this;}
	// const Array& operator&() const {return this;}
	explicit Array(int size = Array::ARRAY_SIZE);
	Array(const int *pArr, int size);
	virtual ~Array(); 	
	Array(const Array& rhs);
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;
	
	virtual int& operator[] (int index);
	virtual const int& operator[](int index) const;
	
	int size() const;
	
};


#endif
