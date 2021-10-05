//Problem: Codechef(https://www.codechef.com/SEPT21C/problems/TRAVELPS)

#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int n,a,b;
	    int dist=0,state=0;
	    cin>>n>>a>>b;
	    string  arr;
	    cin>>arr;
	    for(int i=0;i<arr.length();i++)
	    {
	        if(arr[i]=='0')
	        dist++;
             else if(arr[i]=='1')
	        state++;
	    }
	    dist=dist*a;
	    state=state*b;
	    cout<<(dist+state)<<endl;
	}
	return 0;
}