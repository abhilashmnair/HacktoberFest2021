// C++ program to print prime numbers from 1 to 100
#include <iostream>
#include<cmath>
using namespace std;

int main()
{   cout << "Prime Numbers between 1 and 100 are:\n";

    for(int i=2;i<=100;++i) {           //loop to check for each number in the range
        
        int ctr=0;                      //to maintain factor count
        
        for(int j=2;j<=sqrt(i);++j) {   //checking for factors
            
            if(i%j==0)
            ctr=1;                      //increasing factor count when found
        }

        if(ctr==0)                      //checking and printing prime numbers
            cout<<i<<" ";
    }

    return 0;

}
