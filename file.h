#include <iostream>
#include <string>
#include <fstream>
void file()
{
	using std::string;
	using std::cout;
	using std::cin;
	using std::ofstream;
	string y;
	fileInfo file;
	file.txt = ".txt";
	cout << "What would you like to call your file?\n";
	cin >> file.fileName;
	y = file.fileName + file.txt;
	cout << "Your text file is called " << y << ".\n";
	ofstream fname;
	fname.open(y);
	//fname << y; Local variables write, get the other parameters.
	//Start writing details/current obstacle
	fname.close();
}
