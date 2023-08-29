#include<bits/stdc++.h>
using namespace std;
int greatest_element(int array[],int size)
{
    int greatest=0;
    for(int i=0;i<size;i++)
    {
        if(greatest<array[i])
        {
            greatest=array[i];
        }
    }

    return greatest;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: \t";
    cin>>n;
    int array[n];
    cout<<"Enter the elements in the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The greatest element is "<<greatest_element(array,n);
    return 0;

}
