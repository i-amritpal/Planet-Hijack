/*

struct emp
{
	information info;
	emp *next;

	emp()
	{
		next = 0;
	}
	
	emp(char *n)
	{
		strcpy(info.name, n);
		next = 0;
	}
	
	emp(int code, char *n, char *addr)
	{
	  strcpy(info.name, n);
	  next = 0;
	}
};

class manager
{
	emp *start;
	int emp_count;

  public:
  	
	manager(char* fname)
	{
	emp *ptr = start = new emp;
//	ptr->next = start;
// Causes infinite loop
	emp *temp = 0;
	emp_count = 0;
	
	fstream file(fname);
	if(file)
	{	
		// Inputting of emps from file starts here
		
		while(!file.eof() && file.peek() != EOF)
		{
			file.read((char *) ptr , sizeof(emp));
			
			if(file.peek() != EOF)
			{
				ptr->next = new emp;
				ptr = ptr->next;	
			}
			
		/* DONE (#1#): Add the input functionality */

/*			
		}
	}
	else
		cout << "File Not opened\n";
	
	}
	
	
	void renew()
	{
		emp_count = 0;
		emp *ptr = start = 0;
		char n[20];
		  cout << "=====emp List Populator menu=====\n" 
<< "(Enter 'exit' to quit)\n";

		  cout << "  Enter emp name: ";
		  cin.getline(n, 20);

		if (strcmp(n, "exit"))
		{
			ptr = start = new emp(n);
			emp_count++;
			cout << "#Library initiated\n";
		}
		else
		{
			cout << "#No emp Added - Library Empty!";
		}

		if (strcmp(n, "exit"))
		{
			cout << "  Enter emp name: ";
			cin.getline(n, 20);
		}

		while (strcmp(n, "exit"))
		{
			ptr->next = new emp(n);
			ptr = ptr->next;
			emp_count++;
			cout << "  Enter emp name: ";
			cin.getline(n,20);
		}
	}

	void show()
	{
	//	For Debugging Purposes
		emp *p;
		p = start;
		if (start == 0)
			cout << "#Library Empty\n";
		else
			cout << "  emps in Library are:\n";

		for (int i = 1; p != 0; p = p->next, i++)
		{
			cout << i << ". " << p->info.name << " by " << p->info.address << '\n';
		}
	}

	void sort()
	{
		emp *ptr = start;
		information temp;

		for (int i = 0; i < emp_count; i++)
		{
			for (int j = 0; j < emp_count -1; j++, ptr = ptr->next)
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

	void issue_emp()
	{

	}

	~manager()
	{
		emp *ptr = start;
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
	manager lib("file.data");
	lib.show();
//	lib.sort();
//	lib.show();
	
	getch();
	return 0;
}
*/
