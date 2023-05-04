#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private: //implementation
	int num;
	int den;
	
public: //interface
	Rational(int num, int den);
	Rational(int num);
	Rational();
	~Rational();
	
	int getNum();
	int getDen();
	void setNum(int num);
	void setDen(int den);	
	
} ;





#endif
