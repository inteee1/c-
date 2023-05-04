#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>



class Complex {
friend std::ostream& operator << (std::ostream& out, const Complex& rhs);
private:
	double re;
	double im;
public:
	Complex(double re = 0.0, double im = 0.0);
	~Complex();
	Complex(const Complex &rhs);
	
	Complex& operator=(const Complex &rhs);
	
	bool operator==(const Complex &rhs);
	bool operator!=(const Complex &rhs);
	
	const Complex operator+(const Complex &rhs);
	const Complex operator-(const Complex &rhs);
	
	double real();
	double imag();
	
	void real(double re);
	void imag(double im);
	
	
};




#endif
