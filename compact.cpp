#include <iostream>
#include <string>
#include <fstream>
#include "structure.h"
int main()
{
	using std::cin;
	using std::cout;
	using std::string;
	using std::ofstream;
	string y; //User input + file.txt(.txt)
	string z; //Used to get the temporary file name specifically t=='temp' + file.txt(.txt). Final outcome temp.txt
	string t; //The 'temp' for temp.txt
	t = "temp";
	ofstream fname;
	ofstream tempw;
	fileInfo file;
	file.txt = ".txt";
	cout << "What would you like to call your file?\n";
	cin >> file.fileName; //Getting the input from the user to determine the file name
	y = file.fileName + file.txt;
	z = t + file.txt;
	cout << "Your text file is called " << y << ".\n";
//Grabing the Username/ID
	data user;
	cout << "Enter your username.\n";
	cin >> user.username;
	cout << "The username you entered is "<< user.username << ".\n";
//Grabbing the email
	data userEmail;
	cout << "Enter your email address.\n";
	cin >> userEmail.email;
	cout << "The email address for this account is " << userEmail.email << ".";
//Grabbing the password
	data userPassword;
	cout << "\n" << "Please enter your password.\n";
	//cout << "Please enter your password.\n";
	cin >> userPassword.password;
	cout << "You entered in " << "'"<< userPassword.password << "'" << " for your password.";
	//Implement a checking method to confirm the right password is entered
//Grabbing the website url
	data userWebsite;
	cout << "\n" << "Please enter the website that is being used.\n";
	cin >> userWebsite.website;
	cout << "The website that is assigned to this account is " << userWebsite.website << ".";
//Writing the data to the newly created text file.
//The z file is a temporary file for python to insert into a database
	tempw.open(z);
	tempw << user.username << "\n";
	tempw << userEmail.email << "\n";
	tempw << userPassword.password << "\n";
	tempw << userWebsite.website << "\n";
//This text file is for the user to view clear text
	fname.open(y);
	fname << "Username: "<< user.username << "\n";
	fname << "Email: " << userEmail.email << "\n";
	fname << "Password: " << userPassword.password << "\n";
	fname << "Website: " << userWebsite.website << "\n";
	fname.close();
	return 0;
}