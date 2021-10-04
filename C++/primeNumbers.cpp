#include <iostream>
#include<cmath>
using namespace std;

int main()
{   
	int i,j,n,ctr;

	cout<<"Enter Last Number : ";
	cin>>n;
	
	cout <<"\nPrime Numbers between 1 and "<<n<<" are:\n\n";

    for(i=2;i<=n; i++) 
	{           
        
        ctr=0;                      
        
        for(j=2;j<i; j++)    
		{                    
            
            if(i%j == 0)
			{
				ctr++;              
				break;
			}
                              
        }

        if(ctr==0)  
		{
		    cout<<i<<" ";        
    	}
    	
	}

    return 0;

}
