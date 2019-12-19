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
	string y;
	string z;
	ofstream fname;
	fileInfo file;
	file.txt = ".txt";
	cout << "What would you like to call your file?\n";
	cin >> file.fileName;
	y = file.fileName + file.txt;
	cout << "Your text file is called " << y << ".\n";
	fname.open(y);
		
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
	fname << "Username: "<< user.username << "\n";
	fname << "Email: " << userEmail.email << "\n";
	fname << "Password: " << userPassword.password << "\n";
	fname << "Website: " << userWebsite.website << "\n";
	fname.close();
	return 0;
}