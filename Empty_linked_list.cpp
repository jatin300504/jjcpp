#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int element;
    node *next_element;
    node(int value)
    {
        element=value;
        next_element=nullptr;
    }
};
int main()
{
    node* n =nullptr;
    cout<<(n->element);

}