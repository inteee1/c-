#include <iostream>
#include <string>
int main()
{
	std::string name;
	int age;
	
	std::cout << "input name & age : ";
	std::cin >> name >> age;
	
	
	std::cout << "name : " << name << std::endl;
	std::cout << "age : " << age << std::endl;
	return 0;
}
