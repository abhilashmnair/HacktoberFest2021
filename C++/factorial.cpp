#include<iostream> 

using namespace std;

int main()
{
	int n,i,f;
	cout << "Enter No. " << endl;
	cin >> n;
	f=n;
	for(i=1; i<n; i++)
	{
		f=f*i;
	}
		cout << "Factorial Value is : " << f << endl;

	return 0;
}
