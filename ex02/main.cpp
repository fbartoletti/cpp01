#include <iostream>
#include <string>

int main (){
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	//print memory addresses
	std::cout << "String address: " << &str << std::endl;
	std::cout << "Address contained in pointer: " << ptr << std::endl;
	std::cout << "Address of reference: " << &ref << std::endl;
	//Print values
	std::cout << "Value of string: " << str << std::endl;
	std::cout << "Value pointed to by pointer: " << *ptr << std::endl;
	std::cout << "Value referred to by reference: " <<  ref << std::endl;
}
