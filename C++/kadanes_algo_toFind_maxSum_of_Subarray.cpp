#include <iostream>
using namespace std;
int maxSum(int *p ,int n){
  int cs=0,ms=0;
  for (size_t i = 0; i <n; i++)
  {
      cs+=p[i];
      if (cs<0)
      {
        cs=0;
      }
    
    ms=max(ms,cs);
    
  }
  
 return ms;
}
int main(){
int arr[]={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(arr)/sizeof(int);


cout<<maxSum(arr,n);
return 0;
}