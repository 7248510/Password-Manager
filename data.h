#include <iostream>
#include <string>
void user()
{
	using std::cin;
	using std::cout;
	data user;
	cout << "Enter your username.\n";
	cin >> user.username;
	cout << "The username you entered is "<< user.username << ".\n";
}
void email()
{
	using std::cin;
	using std::cout;
	data userEmail;
	cout << "Enter your email address.\n";
	cin >> userEmail.email;
	cout << "The email address for this account is " << userEmail.email << ".";
}

void password()
{
	using std::cin;
	using std::cout;
	data userPassword;
	cout << "\n" << "Please enter your password.\n";
	//cout << "Please enter your password.\n";
	cin >> userPassword.password;
	cout << "You entered in " << "'"<< userPassword.password << "'" << " for your password.";
	//Implement a checking method to confirm the right password is entered
}

void website()
{
	using std::cin;
	using std::cout;
	data userWebsite;
	cout << "\n" << "Please enter the website that is being used.\n";
	cin >> userWebsite.website;
	cout << "The website that is assigned to this account is " << userWebsite.website << ".";
}