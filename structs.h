// Actual Library Management Project
#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>

using namespace std;

struct date{
	int dd, mm, yy;
	date()
	{
		dd = mm = yy = 0;
	}
	
	date(int d, int m, int y)
	{
		dd =d;
		mm = m;
		yy = y;
	}
};

struct details{
	int code;
	char name[20];
	char address[20];
	long int phone_no;
};

struct information : details
{
	// +++ IN details(struct) +++
	//int code;
	//char name[20];
	//char address[20];
	//long int phone_no;
	
	date date_of_joining;
	char designation[20];
	double salary;
 
	  information()
	{
		  strcpy(name, "EMP DUMMY");
		  strcpy(address, "ADDRESS DUMMY");
	}

};


