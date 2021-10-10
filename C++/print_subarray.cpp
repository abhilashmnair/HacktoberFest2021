
#include <iostream>
using namespace std;


int main()
{int n;
cout<<"enter the size of the array:\n";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sub arrays of the array entered are:\n";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){;
            for(int k=i;k<=j;k++){
            cout<<arr[k]<<" ";
            }
            cout<<"\n";
        }
    } 

    return 0;
}
