//Problem: Codechef(https://www.codechef.com/COOK133C/problems/TYRES/)

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
	    int N;
	    cin>>N;
	    if(N%4==0)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}