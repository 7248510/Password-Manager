#include <iostream>
#include <string>
#include "structure.h"
#include "data.h"
#include "file.h"

//Code restructure
//Structures
//Declaring functions.
void file();
void user();
void email();
void password();
void website();
void restart();

int main()
{
	using std::cin;
	using std::cout;
	using std::string;
	//Calling the functions
	file();
	user();
	email();
	password();
	website();
	//Ending the main function
	//restart();
	return 0;
}