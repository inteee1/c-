#include <cassert>
#include <iostream>
#include "rational.h"


std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	return out << rhs.num << "/" << rhs.den;	
}

void Rational::abbreviate()
{
	int a = this->num;
	int b = this->den;
	while (b != 0)
	{
	int remain = a % b;
	a = b;
	b = remain;
	}
		
	this->num = this->num / a;
	this->den = this->den / a; 
}

Rational::Rational(int num, int den)
{
	assert(den );
	this->num = num;
	this->den = den;
	this->abbreviate();
}
/*Rational::Rational(int num)
{
	this->num = num;
	this->den = 1;
}
Rational::Rational()
{
	this->num = 0;
	this->den = 1;
}
*/
Rational::~Rational()
{

}

Rational::Rational(const Rational &rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;

}



int Rational::getNum()
{
	return this->num;
}

int Rational::getDen()
{
	return this->den;
}

void Rational::setNum(int num)
{
	this->num = num;
}

void Rational::setDen(int den)
{
	assert(den );
	this->den = den;
}

Rational& Rational::operator=(const Rational &rhs)
{
	if(this != &rhs) {
		this->num = rhs.num;
		this->den = rhs.den;
	}
	return *this;
}

bool Rational::operator==(const Rational &rhs)
{
	return (this->num == rhs.num && this->den == rhs.den);
}
bool Rational::operator!=(const Rational &rhs)
{
	return !(this->operator==(rhs));
}
const Rational Rational::operator+(const Rational &rhs)
{
	Rational result(this->num * rhs.den + this->den * rhs.num , this->den * rhs.den);
	return result;
}
const Rational Rational::operator-(const Rational &rhs)
{
	Rational result(this->num * rhs.den - this->den * rhs.num , this->den * rhs.den);
	return result;
}
const Rational Rational::operator*(const Rational &rhs)
{
	Rational result(this->num * rhs.num, this->den * rhs.den);
	return result;
}
const Rational Rational::operator/(const Rational &rhs)
{
	Rational result(this->num * rhs.den, this->den * rhs.num);
	return result;
}
	
	
	

