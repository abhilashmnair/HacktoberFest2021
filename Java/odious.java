import java.util.*;
class odious
{
    int num[]=new int[150];
    int n;
    static Scanner sc=new Scanner (System.in);
    odious()
    {
        for(int i=0;i<150;i++)
        {
            num[i]=0;
        }
        n=0;
    }
    odious(int nx)
    {
        n=nx;
    }
    void inputarr()
    {
        
        for(int i=0;i<n;i++)
        {
            num[i]=sc.nextInt();
        }
    }
    void printodious()
    {
        for(int i=0;i<n;i++)
        {
            int tmp=num[i];
            String bin=Integer.toBinaryString(tmp);
            int f=0;
            for(int j=0;j<bin.length();j++)
            {
             char ch=bin.charAt(j);
             if(ch=='1')
             f++;
            }
            if(f%2!=0)
            System.out.print(tmp+" ");
        }
    }
    public static void main(String args[])
     {
         odious obj=new odious();
         System.out.println("enter number of elements:");
         int z=sc.nextInt();
         odious obj1=new odious(z);
         obj1.inputarr();
         obj1.printodious();
        }
    }
            
    
