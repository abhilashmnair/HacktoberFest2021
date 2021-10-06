#include<iostream>

#include<string>

using namespace std;

struct student
{

	int age;

	string fname;

	string lname;

	int standard;
} ;

	student getdata()

	{
		student s;

		cin >> s.age >> s.fname >> s.lname >> s.standard ;

		return s; 
	}

	void putdata(student s)
		
		{
			cout << "Age : " << s.age << endl << "First Name : " << s.fname << endl << "Last Name : " << s.lname << endl << "Standard : " << s.standard << endl ; 

		}

	int main()

	{

		student s;

		s = getdata();

		putdata(s);

		return 0;
	}

