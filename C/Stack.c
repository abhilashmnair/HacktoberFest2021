#include <stdio.h>
int main()
{
  int ST[5],top=-1,ch,X,i;
  do
  {
  printf("\n 1. PUSH");
  printf("\n 2. POP");
  printf("\n 3. Display");
  printf("\n Enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    if(top<4)
    {
      printf("\n enter the number you want to push");
    scanf("%d", &X);
    top=top+1;
    ST[top]=X;
    printf("\n%d added in stack at %d index location", X, top);
    }
    else
    {
      printf("Stack is full");
    }
    break;
    case 2:
    top--
    break;
    
    case 3:
    for(i=top;i>=0;i--)
    {
      printf("\n %d", ST[i]);
    }
  }
  }while(ch<=3);
  
    

    return 0;
}
