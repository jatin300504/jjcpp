#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int low,int high,int val)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==val)
        {
            return mid+1;
        }
        else if(arr[mid]<val)
        {
            return BinarySearch(arr,mid+1,high,val);
        }
        else
        {
            return BinarySearch(arr,low,mid-1,val);
        }
    }
    return -1;
}
int main()
{
    int size;
    cout<<"Enter the size of array:::"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array:::"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }    
    int val;
    cout<<"Enter the value you want to search:::"<<endl;
    cin>>val;
    int pos=BinarySearch(arr,0,size-1,val);
    if(pos==-1)
    {
        cout<<"Element not present in array"<<endl;
    }
    else
    {
        cout<<"Element present at position of \t"<<pos;
    }
    return 0;
}