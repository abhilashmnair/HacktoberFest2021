//Problem: Codechef(https://www.codechef.com/COOK133C/problems/ADJHATE/)

#include <iostream>
using namespace std;

void solve() {
 
}
int main() 
{
  // your code goes here
  int t;
  cin>>t;
  while(t--)
  {
      int n;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++) {
  cin >> arr[i];
 }
 int odd = 0, even = 0;
 for (int i = 0; i < n; i++) {
  if (arr[i] % 2 == 0) {
   even++;
  } else {
   odd++;
  }
 }
 if (even == 0 and odd > 0) {
  cout << -1 << endl;

 }
 if (odd == 0 and even > 0) {
  cout << -1 << endl;
  }
 if (odd > 0 and even > 0) {
  for (int i = 0; i < n; i++) {
   if (arr[i] % 2 != 0) {
    cout << arr[i] << " ";
   }
  }
  for (int i = 0; i < n; i++) {
   if (arr[i] % 2 == 0) {
    cout << arr[i] << " ";
   }
  }
  cout << endl;
 }
      
  }
  return 0;
}