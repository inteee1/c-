#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>



class Rational {
friend std::ostream& operator<<(std::ostream& out, const Rational& rhs);
private: //implementation
	int num;
	int den;
	void abbreviate(); //helper func.
public: //interface
	
	Rational(int num = 0, int den = 1);
	//Rational(int num);
	//Rational();
	~Rational();
	Rational(const Rational &rhs);
	
	Rational& operator=(const Rational &rhs);
	bool operator==(const Rational &rhs);
	bool operator!=(const Rational &rhs);
	const Rational operator+(const Rational &rhs);
	const Rational operator-(const Rational &rhs);
	const Rational operator*(const Rational &rhs);
	const Rational operator/(const Rational &rhs);
	
	int getNum();
	int getDen();
	void setNum(int num);
	void setDen(int den);	
	
} ;





#endif
