#include <iostream>
#include "boundArray.h"


int main()
{

	BoundArray arr1;
	BoundArray arr2(20);
	int nums[] = {1, 2, 3, 4, 5};
	BoundArray arr3(nums, 5);
	BoundArray arr4(1, 5);
	
	arr1 = arr2;
	
	if (arr1 == arr2){
	} else {
	}
	for (int i = arr2.lower(); i < arr2.upper(); ++i)
	{
		arr2[i] = i;
	}
	
	for (int i = arr2.lower(); i < arr2.upper(); ++i) {
		std::cout << "arr2[" << i << " ] : " << arr2[i] << std::endl; 
	}
	
	return 0;
}
