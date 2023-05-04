#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private: //implementation
	int num;
	int den;
	
public: //interface
	Rational(int num = 0, int den = 1);
	//Rational(int num);
	//Rational();
	~Rational();
	Rational(const Rational &rhs);
	
	void operator=(const Rational &rhs);
	bool operator==(const Rational &rhs);
	
	int getNum();
	int getDen();
	void setNum(int num);
	void setDen(int den);	
	
} ;





#endif
