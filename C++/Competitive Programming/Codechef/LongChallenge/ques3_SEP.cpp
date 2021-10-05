//Problem: COdechef(https://www.codechef.com/SEPT21C/problems/SHUFFLIN)

#include <iostream>
#include<cmath>
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
	  int arr[n];
	  for(int i=0;i<n;i++)
	  {
	      cin>>arr[i];
	  }
	  int e1=(n/2);
	  int o1=ceil(n/2.0);
	  int e2=0,o2=0,P,x;
	  for(int i=0;i<n;i++)
	  {
	      if(arr[i]%2==0)
	      e2++;
	      else
	      o2++;
	  }
	int ans=min(o2,e1)+min(e2,o1);
	cout<<ans<<endl;
	}
	return 0;
}