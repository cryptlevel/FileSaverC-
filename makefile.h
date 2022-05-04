#ifndef MAKE_F
#define MAKE_F

#include <iostream>

// declaring the variable for taking name
std::string NameForFile ;

// make the class
class MakeFile{
public:
	void MakeFileInput(){
	// ask the name
	std::cout << "Enter the user name: " ;
	// add the name to variable
	std::cin >> NameForFile ;
	}
};

#endif // MAKE_F
