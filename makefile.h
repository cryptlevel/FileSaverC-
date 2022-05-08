#ifndef MAKE_F
#define MAKE_F

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

// declaring variable to get the input command for action
std::string commandInput ;
// make array for input action commands
std::string commandInputArray[6] = {"md", "of", "rd", "wd", "yes", "no"} ;

// make variable for comfirming the command
std::string ConfirmCommand ;

// declaring the variable for taking name
std::string NameForFile ;

// declaring the variable for what need to be inside the file create by user
std::string FileInputData ;


// making another class to taking name
class TakeName{
public:
	void TakeNameCode(){
		// ask the name
		std::cout << "Type the file name: " ;
		// add the name to variable--> 'NameForFile'
		std::getline(std::cin, NameForFile) ; // Change the code to 'getline' for make space problem fix

		// declaring the variable for make the name using user input for file
		std::string FileName = NameForFile + ".txt" ;

		//showing the file name
		std::cout << "File Name Will Be: " << FileName << std::endl; // removed '\n' from the code
		// asking the comfirm the name
		std::cout << "Do you confirm the file name(yes/no): " ;
		// store the input to variable--> 'ConfirmCommand'
		std::cin >> ConfirmCommand ;

		// this line is very important for file
		// because of this line that programme get free from the first input line
		// and start as a new line
		std::cin.ignore();
	}
} ;

// make the class for take the file name
class MakeFile{
public:
	void MakeFileInput(){

	std::cout << "Welcome!" << std::endl ;
    std::cout << "Actions you can do here:" << "\n" <<
                 "1. Make new file  --> 'md'" << "\n" <<
                 "2. Open exist file--> 'of'" << "\n" <<
                 "3. Read exist file--> 'rd'" << "\n" <<
                 "4. Write into file--> 'wd'" << std::endl ;

    std::cout << "Enter what you need to do: " ;
    std::cin >> commandInput ;
    std::cin.ignore();

    // response to the input 'md'
        if(commandInput==commandInputArray[0]){

			TakeName GivenName ;
			GivenName.TakeNameCode() ;

			while(ConfirmCommand==commandInputArray[5]){
				TakeName WrongName ;
				WrongName.TakeNameCode() ;
			}

			if(ConfirmCommand==commandInputArray[4]){
				std::string FileName = NameForFile + ".txt" ;
				//this is the code for make file
				// make the file using user input
				std::ofstream userfile(FileName) ;
				std::cout << "File name " << FileName << " is saved." ;
			}

		/*
		// this line is very important for file
		// because of this line that programme get free from the first input line
		// and start as a new line
		std::cin.ignore();

		// asking what need to be in the file
		std::cout << "Type all you need to store in the file: " ;
		// store that data to variable
		std::getline(std::cin, FileInputData) ;

		//this is the code for make file & input data and close the file
		// write into the file
		userfile << FileInputData ;
		// close the file
		userfile.close() ;

		std::cout << "File has been saved & closed." ;

		*/
        }

	/*
        else if(commandInput==commandInputArray[1]){
            std::cout<< "this is ok." ;
        }

	*/

	}
};

#endif // MAKE_F
