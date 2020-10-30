#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next=NULL;
};
struct New_node(int data)
{
    
    return node;
};
Node * insert(Node * root,int data)
{
    Node * new_Node=New_node(data);
    new_Node->next=root;
    return new_Node;
}
void display(Node * root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
}

int main()
{
    int n;
    vector<int> v;
    Node * root=NULL;
    int a;
    for(int i=0;i<n;i++)
    {   cin>>a;
        if(a>=0)
        {v.push_back(1);
        root=insert(root,a);}
        else
        {
            v.push_back(-1);
        }
        
    }
    display(root);
    return 0;
}