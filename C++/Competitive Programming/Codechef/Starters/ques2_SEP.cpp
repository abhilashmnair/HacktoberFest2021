//Problem:Codechef(https://www.codechef.com/START12C/problems/MAKEDIV3/)

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	    cout<<"3"<<endl;
	    else if(n==2)
	    cout<<"15"<<endl;
	    else
	    {
	        cout<<3;
	        for(int i=0;i<n-2;i++)
	        {
	            cout<<0;
	        }
	        cout<<3<<endl;
	    }
	    
	}
	return 0;
}