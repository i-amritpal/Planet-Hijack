// Actual Library Management Project
#include<iostream>
#include<cstring>

using namespace std;

struct information
{
	char *name;
  public:
	  information()
	{
		name = new char[strlen("dummy")];
		  strcpy(name, "dummy");
	}

};

struct book
{
	information info;
	book *next;

	  book(char *n)
	{
		info.name = new char[strlen(n)];
		  strcpy(info.name, n);
		  next = 0;
	}
};

class manager
{
	book *start;
	int bookQty;

  public:
	  manager()
	{
		bookQty = 0;
		book *ptr = start = 0;
		char n[20];
		  cout << "=====Book List Populator menu=====\n" 
<< "(Enter 'exit' to quit)\n";

		  cout << "  Enter book name: ";
		  cin.getline(n, 20);

		if (strcmp(n, "exit"))
		{
			ptr = start = new book(n);
			bookQty++;
			cout << "#Library initiated\n";
		}
		else
		{
			cout << "#No Book Added - Library Empty!";
		}

		if (strcmp(n, "exit"))
		{
			cout << "  Enter book name: ";
			cin.getline(n, 20);
		}

		while (strcmp(n, "exit"))
		{
			ptr->next = new book(n);
			ptr = ptr->next;
			bookQty++;
			cout << "  Enter book name: ";
			cin.getline(n,20);
		}
	}

	void show()
	{
		book *p;
		p = start;
		if (start == 0)
			cout << "#Library Empty\n";
		else
			cout << "  Books in Library are:\n";

		for (int i = 1; p != 0; p = p->next, i++)
		{
			cout << i << ". " << p->info.name << '\n';
		}
	}

	void sort()
	{
		book *ptr = start;
		information temp;

		for (int i = 0; i < bookQty; i++)
		{
			for (int j = 0; j < bookQty -1; j++, ptr = ptr->next)
			{
				if (strcmp(ptr->info.name, ptr->next->info.name) > 0)
				{
//					cout << "debug: " << i << " - " << j << '\n';
					temp = ptr->info;
					ptr->info = ptr->next->info;
					ptr->next->info = temp;
				}
			}
			ptr = start;
		}
	};

void issue_book()
{

}

	~manager()
	{
		book *ptr = start;
		while (ptr != 0)
		{
			ptr = ptr->next;
			delete start;
			start = ptr;
		}
	}
};

int main()
{
	manager lib;
	lib.show();
	lib.sort();
	lib.show();
	return 0;
}
