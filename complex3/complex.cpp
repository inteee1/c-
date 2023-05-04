#include <iostream>
#include "complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
	out << "(" << rhs.re << ", "<< rhs.im << "i)";
	return out;	
}


Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}
/*Complex::~Complex()
{

}*/
Complex::Complex(const Complex &rhs)
{
	this->re = rhs.re;
	this->im = rhs.im;
}
	
Complex& Complex::operator=(const Complex &rhs) //반환타입 ;t타입의 레퍼런스
{
	if (this != &rhs) {
	this->re = rhs.re;
	this->im = rhs.im;
	}
	return *this;
}
	
const Complex Complex::operator+(const Complex &rhs)
{
	Complex result(this->re + rhs.re, this->im + rhs.im);
	
	return result;
}	

const Complex Complex::operator-(const Complex &rhs)
{	
	Complex result(this->re - rhs.re, this->im - rhs.im);
	
	return result;
}	
	
bool Complex::operator==(const Complex &rhs)
{
	return (this->re == rhs.re && this->re == rhs.im);
}	

bool Complex::operator!=(const Complex &rhs)
{
	return !(this->operator==(rhs));
	//return (this->re != rhs.re && this->re != rhs.im);
}

double Complex::real()
{
	return this->re;
}

double Complex::imag()
{
	return this->im;
}	
void Complex::real(double re)
{
	this->re = re;
}
void Complex::imag(double im)
{
	this->im = im;
}
