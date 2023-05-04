#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
#include "string.h"


class Rational {
friend std::istream& operator>>(std::istream& in, Rational& rhs);
friend std::ostream& operator<<(std::ostream& out, const Rational& rhs);
private: 
	int num_;
	int den_;
	void abbreviate(); 
public: 
	
	// Rational() {} X
	// Rational(const Rational& rhs) {/*memberwise copy*/} 
	
	// Rational& operator=(const Rational& rhs) {/*memberwise copy*/ return *this;}
	// Rational *operator&() {return this; }
	//const Rational *operator&() const {return this; }	
	Rational(int num = 0, int den = 1);
	//~Rational() {}
	Rational(const Rational &rhs);
	// Rational& operator=(const Rational& rhs) {/*memberwise copy*/ return *this;}
	//Rational& operator=(const Rational &rhs);
	bool operator==(const Rational &rhs) const;
	bool operator!=(const Rational &rhs) const;
	const Rational& operator+=(const Rational& rhs);
	
	const Rational operator+(const Rational &rhs) const;
	const Rational operator-(const Rational &rhs) const;
	const Rational operator*(const Rational &rhs) const;
	const Rational operator/(const Rational &rhs) const;
	
	const Rational& operator++();
	const Rational operator++(int );
	
	operator String() const;
	
	int getNum() const;
	int getDen() const;
	void setNum(int num);
	void setDen(int den);	
	
} ;





#endif
