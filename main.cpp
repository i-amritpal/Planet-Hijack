// Industry Management Project
// ### Main.cpp ###

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<fstream>
#include"structs.h"

using namespace std;

bool login()
{
	bool login_status = false;
	char n[20], name[20];
	char pswd[20], password[20];
	
	// The First screen of the program
	cout << "-------Login Menu--------\n"
	<< "Enter the name: ";
	cin.getline(n,20);
	cout << "Enter the password: ";
	cin.getline(pswd, 20);
	
	// Name and password extraction from file and checking
	fstream file("data.db");
	if(!file)
	{
		cout << "file not opened\n";
	}
	else{
		int x  = sizeof(name);
		//todo
		//file.read(&name , x);
		//file.read(&password , 20);
		
		if((!strcmp(name, n)) && (!strcmp(password, pswd)))
			login_status = true;
		else
			login_status = false;
	}
	return login_status;
}

int main()
{
	
	return 0;
}
