#ifndef MAKE_F
#define MAKE_F

#include <iostream>
#include <fstream>
#include <string>

// declaring the variable for taking name
std::string NameForFile ;

// declaring the variable for what need to be inside the file create by user
std::string FileInputData ;

// make the class for take the file name
class MakeFile{
public:
	void MakeFileInput(){
		// ask the name
		std::cout << "Enter the user name: " ;
		// add the name to variable 'NameForFile'
		std::getline(std::cin, NameForFile) ; // Change the code to 'getline' for make space problem fix

		// declaring the variable for make the name using user input for file
		std::string FileName = NameForFile + ".txt" ;

		//showing the file name
		std::cout << "File Name Will Be: " << FileName ; // removed '\n' from the code

		// this line is very important for file
		// because of this line that programme get free from the first input line
		// and start as a new line
		std::cin.ignore();

		// asking what need to be in the file
		std::cout << "What you need to store in the file: " ;
		// store that data to variable
		std::getline(std::cin, FileInputData) ;

		//this is the code for make file & input data and close the file
		// make the file using user input
		std::ofstream userfile(FileName) ;
		// write into the file
		userfile << FileInputData ;
		// close the file
		userfile.close() ;

		std::cout << "File has been saved & closed." ;
	}
};

#endif // MAKE_F
