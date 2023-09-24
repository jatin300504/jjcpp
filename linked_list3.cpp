#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
};
node* insert_in_linked_list(node *& start,int value)
{
    node* new_node=new node;
    new_node->next=NULL;
    new_node->data=value;
    start=new_node;
    return new_node;
}
int main()
{
    node*start=NULL;
    node* new_node=new node;
    int value;
    cout<<"Enter the data for the second node: "<<endl;
    cin>>value;
    new_node=insert_in_linked_list(start,value);
    
}