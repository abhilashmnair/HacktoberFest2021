#include<iostream>
using namespace std;

class CodesCracker
{
   private:
      int i;
   public:
      void fact(int n)
      {
         for(i=1; i<=n; i++)
         {
            if(n%i==0)
               cout<<i<<" ";
         }
      }
};

int main()
{
   CodesCracker obj;
   int num;
   cout<<"Enter a Number: ";
   cin>>num;
   cout<<"\nFactors of "<<num<<" are:\n";
   obj.fact(num);
   cout<<endl;
   return 0;
}
