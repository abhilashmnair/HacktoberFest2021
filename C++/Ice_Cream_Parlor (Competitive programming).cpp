/*-----------------Problem--------------------------------------------
Two friends like to pool their money and go to the ice cream parlor. 
They always choose two distinct flavors and they spend all of their money.
Given a list of prices for the flavors of ice cream,
select the two that will cost all of the money they have.

Example.  m=6 cost=[1,3,4,5,6]

The two flavors that cost 1 and 5 meet the criteria. Using 1-based indexing,
they are at indices 1 and 4.*/

#include<iostream>
using namespace std;

int main()
{
    int t,m,n,i,j,p=0;
    cout<<"enter how many number"<<endl;
    cin>>t;
    while (t--)
    {
        cin>>m>>n;
        int a[m];
        for ( i = 0; i < m; i++)
        {              
            cin>>a[i];
        }
   
        for (i = 0; i < n; i++)
        
         for (i = 0; i < n; i++)
             if(m==a[i]+a[j])
                   cout<<i+1<<" "<<j+1;
     }
    
 return 0;
}