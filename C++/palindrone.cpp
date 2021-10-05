#include<iostream> 
using namespace std;
int main()
{
	int n,r,i,t,sum=0;
	cout <<"enter no. " << endl;
	cin >> n;
	t =n;

	while(n!=0)
	{
		r = n%10;
		sum = sum*10 + r;
		n = n/10;
	}

	if(sum == t)
	     {
		     cout << "Palindrone"<< endl;
	     }
	else
	     {
		     cout << "Not Palindrone"<< endl;
	     }
	return 0;
}
