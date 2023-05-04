#include <iostream>
#include "array.h"

int main()
{
	int num[] = {1, 2, 3, 4, 5};
	Array arr1(num, 5);
	Array arr2;
	Array arr3(100); // Array arr3 = 100 X
	const Array arr4 = arr1;
	
	arr2 = arr1;
	
	if (arr1 == arr2) {
		std::cout << "arr1 and arr2 are equal." << std::endl;
	}	else {
			std::cout << "arr1 and arr2 are not equal." << std::endl;
	}
	
	for (int i = 0; i < arr1.size(); ++i) {
		std::cout <<arr1[i] <<std::endl; 		//arr1.operator[](i)
	}
	//arr4[0] = 0;
	
	return 0;
}
