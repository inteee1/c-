#include <cassert>



inline int Rational::getNum() const
{
	return num_;
}

inline int Rational::getDen() const
{
	return den_;
}

inline void Rational::setNum(int num)
{
	num_ = num;
}

inline void Rational::setDen(int den)
{
	assert(den );
	den_ = den;
}
