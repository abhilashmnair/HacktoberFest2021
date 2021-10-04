//linked list program by Amit giri ( Amitlpu-840 )
#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *start = NULL;

node *createNode(int a)
{
    node *n1 = new node();
    n1->data = a;
    n1->next = NULL;
    return n1;
}
void insertAtBeg(int a)
{
    node *newNode = createNode(a);
    if (start == NULL)
        start = newNode;
    else
    {
        newNode->next = start;
        start = newNode;
    }
}
void display()
{
    node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}
int main()
{
    int x;
    cout<<"sizeof linked list :";
    cin>>x;
    cout<<"enter elements :";
    for (int i = 0; i < x; i++)
    {
        int a;
        cin>>a;
        insertAtBeg(a);
        
    }
    
    display();
    return 0;
}
