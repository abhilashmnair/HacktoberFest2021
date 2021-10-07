//this is the program to check whether the first and last chracter is same or not if yes print 1 or 0

#include<stdio.h>
#include <string.h>
int main()
{
char srt[100];
  gets(srt);
  int temp=strlen(srt)-1;
  if(srt[temp]==srt[0]){
    printf("1");
  }
  else{
    printf("0");
  }
}
