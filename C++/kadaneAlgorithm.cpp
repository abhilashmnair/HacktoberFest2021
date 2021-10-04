// Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 

// Explanation: 
// The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this).
// And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this).
// Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far 

//     Lets take the example:
//     {-2, -3, 4, -1, -2, 1, 5, -3}

//     max_so_far = max_ending_here = 0

//     for i=0,  a[0] =  -2
//     max_ending_here = max_ending_here + (-2)
//     Set max_ending_here = 0 because max_ending_here < 0

//     for i=1,  a[1] =  -3
//     max_ending_here = max_ending_here + (-3)
//     Set max_ending_here = 0 because max_ending_here < 0

//     for i=2,  a[2] =  4
//     max_ending_here = max_ending_here + (4)
//     max_ending_here = 4
//     max_so_far is updated to 4 because max_ending_here greater 
//     than max_so_far which was 0 till now

//     for i=3,  a[3] =  -1
//     max_ending_here = max_ending_here + (-1)
//     max_ending_here = 3

//     for i=4,  a[4] =  -2
//     max_ending_here = max_ending_here + (-2)
//     max_ending_here = 1

//     for i=5,  a[5] =  1
//     max_ending_here = max_ending_here + (1)
//     max_ending_here = 2

//     for i=6,  a[6] =  5
//     max_ending_here = max_ending_here + (5)
//     max_ending_here = 7
//     max_so_far is updated to 7 because max_ending_here is 
//     greater than max_so_far

//     for i=7,  a[7] =  -3
//     max_ending_here = max_ending_here + (-3)
//     max_ending_here = 4


#include<iostream>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]); // Current maximum is updated
        max_so_far = max(max_so_far, curr_max); // If Current Maximum is more than Global Maximum then update Global maximum
   }
   return max_so_far;
}
 
/* Driver program to test maxSubArraySum */
int main()
{
   int m;
   cin>>m;
   int a[m];
   for(int i=0;i<m;i++)
   {
       cin>>a[i];
   }
   int max_sum = maxSubArraySum(a, m);
   cout << "Maximum contiguous sum is " << max_sum<<endl;
   return 0;
}