#include <iostream>
#include <string>
//Using functions
int parameters();
int prompt();
void goals();

int main()
{
	using std::cout;
	using std::string;
	cout << "Local Password manager";
	//Testing functions
	prompt();
	parameters();
	goals();
	
}

prompt()
{
	//Getting the data
	return 0;
}




parameters()
{
	 struct data
        {
                std::string username;
                std::string email;
                std::string password;
                std::string website;
        };

        struct id
        {
                int UID;
                int ZID;
        };
return 0;
};

void goals()
{
//Defining the data structure
        /*
        Outline of development
        (3 Seperate Databases one for the user information, a second one for a users UID per session and a ZID, matching UID'S to ZID, and a fourth database for matching ZID'S to web logins)
        Write a clear text files to your computer.(C++, will implement encryption)
        Enter the name of the file you would like to save
        Four parameters will be accounted for. Username, Password, Email, Website
        Once the parameters are accounted for it will save the text file and assign a UID within the text file
        Prompt the user if they'd like to continue
        restart()
        Using the UID upload it to DB1, and match the ZID(DB3)(Match the UID for each entry to an individuals ZID)
        After the text file is written upload the values to a database then delete the local text file(Python/C++) DB1 matching the UID
        Once uploaded
        */
}	
