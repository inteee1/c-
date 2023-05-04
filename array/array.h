#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAY_SIZE 100

//extern const int ARRAY_SIZE;
class Array {
private:
	static const int ARRAY_SIZE;
	int *pArr_;
	int size_;
	
public:
	// Array& *operator&() { return this;}
	// const Array& operator&() const {return this;}
	explicit Array(int size = Array::ARRAY_SIZE);
	Array(const int *pArr, int size);
	~Array(); 	
	Array(const Array& rhs);
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;
	
	int& operator[] (int index);
	const int& operator[](int index) const;
	
	int size() const;
	
};


#endif
