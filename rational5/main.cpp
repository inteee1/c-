#include <iostream>
#include "string.h"
#include "rational.h"

using std::cout;
using std::endl;
using std::cin;
int main()
{
	Rational r1(3, 4);   //3/4
	Rational r2(3);      // 3/1
	Rational r3;         // 0/1
	Rational r5, r6, r7, r8, r10;
	Rational r4 = r1; // Rational r4(r3)
	r3 = r2 = r1;
	r4 = r1 + r2;
	r5 = r1 - r2;
	r6 = r1 * r2;
	r7 = r1 / r2;
	r8.setNum(r1.getNum());
	r8.setDen(r1.getDen());
	
	r10 = r8;
	Rational *p1 = &r1;
	const Rational r9(4, 5);
	const Rational *p9 = &r5;
	//r3.setNum(3);
	//r3.setDen(4);
	
	if (r1 == r3) {
		std::cout << "r1 and r3 are equal" << std::endl;
	} else {
		std::cout << "r1 and r3 are not equal" << std::endl;
	}
	
	r8 += r7;
	
	r1 != r3;
	++r8;
	r8++;
	
	String s = r8;
	
	//std::cout << r1; // std::cout.operator<<(r1) X operator<<(std::cout,r1) 0
	cout << "r1 : " << r1 << endl;
	cout << "r2 : " << r2 << endl;
	cout << "r3 : " << r3 << endl;
	cout << "r4 : " << r4 << endl;
	cout << "r5 : " << r5 << endl;
	cout << "r6 : " << r6 << endl;
	cout << "r7 : " << r7 << endl;
	cout << "r8 : " << r8 << endl;
	cout << "r9 : " << r9 << endl;
	cout << "r10 : " << r10 << endl;
	cout << "s : " << s << endl;
	
	cout << "input rational : ";
	Rational r11;
	cin >> r11;
	cout << "r11 : " << r11 <<endl;
	/*std::cout << "r1 : " << r1.getNum() << "/" << r1.getDen() << std::endl;
	std::cout << "r2 : " << r2.getNum() << "/" << r2.getDen() << std::endl;
	std::cout << "r3 : " << r3.getNum() << "/" << r3.getDen() << std::endl;
	std::cout << "r4 : " << r4.getNum() << "/" << r4.getDen() << std::endl;
	std::cout << "r5 : " << r5.getNum() << "/" << r5.getDen() << std::endl;
	std::cout << "r6 : " << r6.getNum() << "/" << r6.getDen() << std::endl;
	std::cout << "r7 : " << r7.getNum() << "/" << r7.getDen() << std::endl;*/
	return 0;
}

