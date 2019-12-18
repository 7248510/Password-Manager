#include <iostream>
#include <string>

void file()
{
	using std::string;
	using std::cout;
	using std::cin;
	string y;
	fileInfo file;
	file.txt = ".txt";
	cout << "What would you like to call your file?\n";
	cin >> file.fileName;
	y = file.fileName + file.txt;
	cout << "Your text file is called " << y << ".\n";
}