#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=nullptr;
        }
};
int main()
{
    node* n=new node(400);
    cout<<n->data<<endl;
    n->data=5000;
    cout<<n->data<<endl;

}