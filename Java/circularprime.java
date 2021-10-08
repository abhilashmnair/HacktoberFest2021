// CIRCULAR PRIME NUMBER 

import java.util.*;
class circularprime
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int nd=(n+"").length();
        int x=n;
        int f=0;
        boolean prime=true;
        int i;
        do
        {
            System.out.println(x);
            for(i=2;i<x;i++)
            
                if(x%i==0)
                break;
            
            if(i!=x)
            {
            prime=false;
            break;
            }
            
            x=x%10*(int)Math.pow(10,nd-1)+x/10;
            }while(x!=n);
            if(prime==true)
            System.out.println("the no. is circular prime");
            else
             System.out.println("the no. is not circular prime");
            }
        }
                  
                
        
