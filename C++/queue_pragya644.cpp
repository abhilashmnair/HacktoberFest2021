#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*next;
}*front= NULL, *rear = NULL;

void enqueue(node*q, int x)
{
    node*t = new node;
    if(t==NULL)
        cout<<"queue is empty"<<endl;
    else
    {
        t->data = x;
        t->next = NULL;
        if(front==NULL)
            front=rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int dequeue(node *q)
{
    int x=-1;
    if(front==NULL)
        cout<<"queue is empty"<<endl;
    else
    {
        node*p;
        p = front;
        front = front->next;
        x = p->data;
        free(p);
    }
    cout<<endl;
    return x;
}
void display(node q)
{
    node *p = front;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main()
{
    node q;
    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 12);
    display(q);

    cout<<dequeue(&q)<<endl;
    return 0;

}