#include <iostream>
#include "list.h"

int main(){
	List list1;
	//List list2 = list1; X
	//list2 = list1; X
	
	list1.insertFirst(4);		// [4]
	list1.insertFirst(2);		// [3,4]
	list1.insertFirst(1);		// [1,3,4]
	list1.insert(2, 3);
	//list1.print();
	std::cout<<list1<< std::endl;

	
	list1.remove(2);
	std::cout << list1 << std::endl;
	//list1.print();
	
	return 0;
}
