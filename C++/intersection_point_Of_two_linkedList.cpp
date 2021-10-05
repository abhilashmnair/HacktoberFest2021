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

       if (head==NULL)  // condition if linklist is empty
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


void intersect(node* &head1, node* &head2, int pos)// intersect link list bnai h
{
    node* temp1=head1;
    pos--;
    while (pos--)
    {
        temp1=temp1->next;
    }
    node* temp2 = head2;
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    
    temp2->next=temp1;
}


int lenght(node* head)// lenght function
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


int intersection(node* &head1, node* &head2)// find intersection point
{
int l1=lenght(head1);
int l2=lenght(head2);
int d=0;
node* ptr1;
node* ptr2;

if(l1>l2){
d=l1-l2;
ptr1=head1;
ptr2=head2;
}

else{
    d=l2-l1;
    ptr1=head2;
    ptr2=head1;
}

while (d)
{
    ptr1=ptr1->next;
    if(ptr1==NULL)
    {
        return -1;
    }
    d--;
}
while (ptr1!=NULL && ptr2!=NULL)
{
     if(ptr1==ptr2)
    {
        return ptr1->data;
    }

    ptr1=ptr1->next;
    ptr2=ptr2->next;
}
return -1;
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
    node* head1=NULL;
    node* head2=NULL;

    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    insertAtTail(head2,9);
    insertAtTail(head2,10);
    intersect(head1,head2,4);// we intersect on 4
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    // display(head);
  
        //  node* newhead=append(head,2);
        //  display(newhead);
    return 0;
}




