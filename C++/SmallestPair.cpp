// Input:
// 1
// 4
// 5 1 3 4

// Output:
// 4

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<2;i++)
	        for(int j=i;j<n;j++){
	            if(arr[j]<arr[i]){
	                int temp=arr[j];
	                arr[j]=arr[i];
	                arr[i]=temp;
	            }
	        }
	    cout<<arr[0]+arr[1]<<endl;
	}
	return 0;
}
