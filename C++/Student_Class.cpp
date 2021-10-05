#include <iostream>
#include <sstream>
using namespace std;

class student
{
 private:
  int age;
  string fname;
  string lname;
  int standard;
    public:
    void get_age(int a)
      {
        age = a;
      }
    void get_first_name(string f)
      {
      fname = f;
      }
    void get_last_name(string l)
      {
        lname = l;
      }
    void get_standard(int std)
      {
        standard = std;
      }   
  
    void set_age()
    {
       cout << age << endl;
    }

    void set_first_name()
    {
       cout << fname << endl;
    }

    void set_last_name()
    {
        cout << lname << ", " ;
    }

    void set_standard()
    {
        cout << standard << endl;
    }
  
};

int main() {

  int age,standard;
  string fname,lname;

   student s1;

   cin>> age >> fname >> lname >> standard ;

   s1.get_age(age);
   s1.get_last_name(lname);
   s1.get_first_name(fname);
   s1.get_standard(standard);

   s1.set_age();
   s1.set_last_name();
   s1.set_first_name();
   s1.set_standard();

   cout << endl;
   cout << age << "," << fname << ","<< lname << "," << standard << endl;
    return 0;
} 
