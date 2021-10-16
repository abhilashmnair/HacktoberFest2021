
import java.util.*;
public class LinkedList
{
    class Node
    {
        int data;
        Node next;
        Node(int data,Node temp)
        {
            this.data=data;
            next=temp;
        }
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    Node head=null;
    Node tail=null;
	public void addNode(int data) 
    {
        Node node=new Node(data);
        if(head==null){
            head=tail=node;
        }else{
            tail.next=node;
            tail=node;
        tail.next=head;
        }
        
        //Fill your code here
	}
	public void deleteAtFirst() {
    
	//Fill your code here
    head=head.next;
    tail.next=head;
    System.gc();
;	}
	public void display() 
	{ 
	//Fill your code here
   
    if(head!=null){
         Node temp=head;
        do{
            System.out.print(temp.data+" ");
            if(temp.next==null)
            break;
            else
            temp=temp.next;
        }while(temp!=head);
        System.out.println();
    }
    }
}

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ch="";
        LinkedList list = new LinkedList();
        do{
        System.out.println("Enter the value");
        int n = sc.nextInt();
        sc.nextLine();
        list.addNode(n);
        System.out.println("Do you want to add another node? Type Yes/No");
        ch = sc.nextLine();
        }while(ch.equals("Yes")); 
        System.out.print("The elements in the linked list are  ");
        list.display();
    	list.deleteAtFirst();
    	System.out.print("\nAfter deletion,");
        System.out.print("The elements in the linked list are  ");
    	list.display();
	} 
}
