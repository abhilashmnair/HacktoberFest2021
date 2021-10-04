/*
Problem satement: A queue is an abstract data type that maintains the order in which elements were added to it, allowing the oldest elements to be removed from the front and new elements to be added to the rear. This is called a First-In-First-Out (FIFO) data structure because the first element added to the queue (i.e., the one that has been waiting the longest) is always the first one to be removed.

A basic queue has the following operations:

Enqueue: add a new element to the end of the queue.
Dequeue: remove the element from the front of the queue and return it.
In this challenge, you must first implement a queue using two stacks. Then process q queries, where each query is one of the following 3  types:

1 x: Enqueue element x into the end of the queue.
2: Dequeue the element at the front of the queue.
3: Print the element at the front of the queue.
Input Format

The first line contains a single integer, q, denoting the number of queries.
Each line i of the q subsequent lines contains a single query in the form described in the problem statement above. All three queries start with an integer denoting the query type, but only query 1 is followed by an additional space-separated value, x , denoting the value to be enqueued.
*/

#include <iostream>
#include <stack>

using namespace std;

int main() 
{
  int q, type, value;
  char operation;
  stack<int> S1, S2;
  stack<char> S3, S4;
    
  cin >> q;
  while(q--)
  {
    cin >> type;
    if(type == 1)
    {
      cin >> value;
      S1.push(value);
    }
    else if(type == 2)
    {
      S3.push('d');
    }
    else
    {
      S3.push('p');
    }
  }

  // Perform the actual operations.
  while(!S1.empty())
  {
    value = S1.top();
    S1.pop();
    S2.push(value);
  }

  while(!S3.empty())
  {
    value = S3.top();
    S3.pop();
    S4.push(value);
  }

  while(!S2.empty())
  {
    operation = S4.top();
    value = S2.top();
    S4.pop();

    if(operation == 'p')
    {
      // Print.
      cout << value << endl;
    }
    else
    {
      // Dequeue.
      S2.pop();
    }
  }

  return 0;
}
