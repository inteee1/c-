#include <iostream>
#include "complex.h"

int main()
{
	Complex c1(3.0, 4.0);  
	
	Complex c2 = 3.0;
	Complex c3; 
	
	Complex c4 = c1;
	
	c3 = c2 = c1; //daisy-chain 
	c3 = 1.0; //c3.operator=(1.0) complex tmp(1.0); c3. operator =(tmp,~complex()
	c3 = c1 + c2;
	c4 = c1 - c2;
	
	if (c1 == c3) { 			
		std::cout << "c1 and c3 are equal" << std::endl;
	} else {
		std::cout << "c1 and c3 are not equal" << std::endl;
	}
	
	c1 != c3;
	
	//std::cout << "c1: (" << c1.real() << ", " << c1.imag() << "i)" << std::endl;
	//std::cout << c1; //std::cout.operator<<(c1) X --> operator<<(std::cout,c1) 0
	
	
	std::cout << "c1 : " << c1 << std::endl; //std::cout << c1;
	std::cout << "c2 : " << c2 << std::endl; 
	std::cout << "c3 : " << c3 << std::endl; 
	std::cout << "c4 : " << c4 << std::endl; 
	return 0;
}
