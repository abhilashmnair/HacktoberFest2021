/*
  Author Lakshay Goel
  Github profile: https://github.com/MrLakshay
  Problem link: https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
  Given are two numbers we need to find their GCD
  Time complexity : O(log(max(a,b)))
*/

#include<iostream>
using namespace std;
int gcd(int num1,int num2){
    if(num2 == 0){
        return num1;
    }
    else{
        gcd(num2,num1%num2);
    }
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<gcd(num1,num2);
    return 0;
}
