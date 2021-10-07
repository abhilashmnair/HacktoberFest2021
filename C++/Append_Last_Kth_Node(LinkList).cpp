#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
       data=val;
       next=NULL;
    }
};

void insertAtTail(node* &head,int val){ //insert node at the tail of linklist
     node* n=new node(val); //   make a new node to data is insert

       if (head==NULL)  // condition wif linklist is empty
        {
           head=n;
         return;
     }
        
     node* temp=head;     // make a pointer temp which is point head for traversing the linkedlist 
     while (temp->next!=NULL)
     {
        temp=temp->next;
     }

     temp->next=n; 
 }

  int lenght(node* head)
  {
      node* temp=head;
      int l=0;
    while (temp!=NULL)
    {
        l++;
       temp=temp->next;
    }
    return l;
  }

  node* append(node* &head,int k)
  {
      node* newtail;
      node* newhead;
      node* tail=head;
      
      int l=lenght(head);
      //k=k%l;
      int count=1;
      while (tail->next!=NULL) 
      {
          if (count==l-k)
          {
              newtail=tail;
          }

          if (count==l-k+1)
          {
              newhead=tail;
          }

          tail=tail->next;
          count++;
      }

      newtail->next=NULL;
      tail->next=head;
      return newhead;
  }


  void display(node* head) // display function
    {
    node* temp=head;
    while (temp!=NULL)
    {
     cout<<temp->data<<" -> ";
     temp=temp->next;
    }
    cout<<"NULL"<<endl;
   }

int main()
{
    node* head=NULL;
    //-------------------------------------------------------this is user defiend---------
    // int arr[]={1,2,3,4,5,6};
    // for (int i = 0; i < 6; i++)
    // {
    //     insertAtTail(head,arr[i]);
    // }
    // display(head);
    // node* newnode=append(head,3);
    // display(newnode);
    
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
  
         node* newhead=append(head,2);
         display(newhead);
    return 0;
}




