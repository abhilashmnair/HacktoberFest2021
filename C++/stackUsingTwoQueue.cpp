// Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
//Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        if(q1.empty() && q2.empty())
            q1.push(x);
        else if(q1.empty())
            q2.push(x);
        else 
            q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
   // cout<<"("<<q1.empty()<<" "<<q2.empty()<<")\n";
        if(q1.empty() && q2.empty())
           return -1;
        else if(q1.empty())
        {
            while(q2.size()!=1)
            {
                int temp = q2.front();
                q1.push(temp);
                q2.pop();
            }
            int x = q2.front();
            q2.pop();
            return (x);
        }
        else 
        {
            while(q1.size()!=1)
            {
                int temp = q1.front();
                q2.push(temp);
                q1.pop();
            }
            int x = q1.front();
            q1.pop();
            return (x);
        }
}
