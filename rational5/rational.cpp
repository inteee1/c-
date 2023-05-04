#include <cassert>
#include <iostream>
#include <cstdio>
#include "string.h"
#include "rational.h"
#include "gcd.h"

#ifndef INLINE
#define inline
#include "rational.inl"
#endif



std::istream& operator>>(std::istream& in, Rational& rhs)
{
	int Num = 0;
	int Den = 1;
	in >> Num;
	if ( in.peek() == '/') {
		in.ignore(1);
		in >> Den;
	}
	if (in) {rhs = Rational(Num, Den);}
	return in;
}

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	return out << rhs.num_ << "/" << rhs.den_;	
}

void Rational::abbreviate()
{
/*
	int a = num_;
	int b = den_;
	while (b != 0)
	{
	int remain = a % b;
	a = b;
	b = remain;
	}*/
	int g = gcd(num_, den_);
	num_ = num_ / g;
	den_ = den_ / g; 
}

Rational::Rational(int num, int den)
: num_(num), den_(den)
{
	assert(den );
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
/*Rational::~Rational()
{

}*/

Rational::Rational(const Rational &rhs)
{
	num_ = rhs.num_;
	den_ = rhs.den_;

}



/*
Rational& Rational::operator=(const Rational &rhs) 
{
	if(this != &rhs) {
		num_ = rhs.num_;
		den_ = rhs.den_;
	}
	return *this;
}
*/
bool Rational::operator==(const Rational &rhs) const
{
	return (num_ == rhs.num_ && den_ == rhs.den_);
}
bool Rational::operator!=(const Rational &rhs) const
{
	return !(this->operator==(rhs));
}

const Rational& Rational::operator+=(const Rational& rhs)
{
	num_ = num_ * rhs.den_ + den_ * rhs.num_;
	den_ = rhs.den_ * den_;
	this->abbreviate();
	return *this;
}
const Rational Rational::operator+(const Rational &rhs) const
{
	Rational result(num_ * rhs.den_ + den_ * rhs.num_ , den_ * rhs.den_);
	return result;
}
const Rational Rational::operator-(const Rational &rhs) const
{
	Rational result(num_ * rhs.den_ - den_ * rhs.num_ , den_ * rhs.den_);
	return result;
}
const Rational Rational::operator*(const Rational &rhs) const
{
	Rational result(num_ * rhs.num_, den_ * rhs.den_);
	return result;
}
const Rational Rational::operator/(const Rational &rhs) const
{
	Rational result(num_ * rhs.den_, den_ * rhs.num_);
	return result;
}

const Rational& Rational::operator++()
{
	num_ += den_;
	
	return *this;
}
	
const Rational Rational::operator++(int )
{
	Rational tmp(*this);
	num_ += den_;
	
	return tmp;
}
	
Rational::operator String() const
{
	char buf[128];
	sprintf(buf, "(%d/%d)", num_, den_);
	
	String result(buf);
	return result;
}
