#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private: 
	double re;
	double im;
	
	
public:
	Complex();	//function overloading (함수 중복)
	Complex(double re); // one-interface multi-method
	Complex(double re,  double im);
	~Complex();
	
	double real();
	double imag();
	void real(double re);
	void imag(double im);
} ;







#endif

