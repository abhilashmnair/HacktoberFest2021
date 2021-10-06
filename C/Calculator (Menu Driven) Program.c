#include<stdio.h>

void main() 
{
    int n1,n2,option;

    do
    {
        printf("\nChoose your option\n");
        printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d",&option);
        if(option==5)
        {
            break;
        }

        switch(option) 
        {
            case 1:
                printf("Enter the first Integer\n");
                scanf("%d",&n1);
                printf("Enter the second Integer\n");
                scanf("%d",&n2);
                printf("The Addition of  %d and %d is: %d\n",n1,n2,n1+n2);
                break;
        
            case 2:
                printf("Enter the first Integer\n");
                scanf("%d",&n1);
                printf("Enter the second Integer\n");
                scanf("%d",&n2);
                printf("The Substraction of %d  and %d is: %d\n",n1,n2,n1-n2);
                break;
        
            case 3:
                printf("Enter the first Integer\n");
                scanf("%d",&n1);
                printf("Enter the second Integer\n");
                scanf("%d",&n2);
                printf("The Multiplication of %d  and %d is: %d\n",n1,n2,n1*n2);
                break;  
    
            case 4:
                printf("Enter the first Integer\n");
                scanf("%d",&n1);
                printf("Enter the second Integer\n");
                scanf("%d",&n2);
                if(n2==0) 
                {
                    printf("Error\n");
                } 
                else 
                {
                    printf("The Division of %d  and %d is : %d\n",n1,n2,n1/n2);
                }  
                break;
            
            case 5: 
                break; 
        
            default:
                printf("Invalid option\n");
                break; 
        }
    }while(option!=5);
}
