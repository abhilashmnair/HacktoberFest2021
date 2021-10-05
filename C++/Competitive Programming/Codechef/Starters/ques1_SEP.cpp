//Problem : Codechef[https://www.codechef.com/START12C/problems/GOODWEAT/]

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
	    int arr[7];
	    int one=0,zero=0;
	    for(int i=0;i<7;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]==1)
	        one++;
	        else
	        zero++;
	    }
	    if(one>zero)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
