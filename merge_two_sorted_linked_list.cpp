#include<iostream>
using namespace std;

class node
{
    int data = 0;
    node *next = NULL;

public:
    node* create_node(int, node*);
    node* insert_node(node*, int);
    node* merge_sorted_list(node*, node*);
    void Print(node*);
};

int main()
{
    int arr_one[] = {6, 4, 2, 0};
    int arr_two[] = {7, 5, 3, 1};
    node obj,
     *root_one=NULL,
     *root_two=NULL,
     *ans = NULL;

     //Creating linked list(s)
    for(int i=0; i<4; i++)
    {
        root_one = obj.insert_node(root_one, arr_one[i]);
        root_two = obj.insert_node(root_two, arr_two[i]);
    }
    cout<<"1st sorted list: ";
    obj.Print(root_one);
    cout<<"2nd sorted list: ";
    obj.Print(root_two);

    //Calling function to merge two sorted list
    ans = obj.merge_sorted_list(root_one, root_two);
    cout<<"Merged Sorted list: ";
    obj.Print(ans);

    return 0;
}

node* node::merge_sorted_list(node *root_one, node *root_two)
{
    //To handle corner cases where any of root provided is NULL pointer.
    if(!root_one && root_two)
        return root_two;

    else if(!root_two && root_one)
        return root_one;

    else if(root_one->data > root_two->data)
    {
        root_two->next = merge_sorted_list(root_one, root_two->next);
        return root_two;
    }

    else
    {
        root_one->next = merge_sorted_list(root_two, root_one->next);
        return root_one;
    }
}

node* node::insert_node(node *root, int data)
{
    //Insertion at beginning
    root = create_node(data, root);
    return root;

}

node* node::create_node(int data, node *next)
{
    node *temp = new node();
    temp->data = data;
    temp->next = next;
    return temp;
}

void node::Print(node* root)
{
    while(root != NULL)
    {
        cout<<root->data<<" ";
        root = root->next;
    }
    cout<<endl;
}
