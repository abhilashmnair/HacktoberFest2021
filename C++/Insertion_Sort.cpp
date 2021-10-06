// Insertion Sort: Insert an element from unsorted array to its correct "position" in sorted array
// Correct Position == left smaller elements and right greater ones
// here we start from 2nd element and assume 1st one is sorted

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j = i - 1;

        while(arr[j]>current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }   cout<<endl;

    return 0;
}