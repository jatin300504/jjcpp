#include<bits/stdc++.h>
using namespace std;
int partition(int [],int,int);
void swap(int&,int&);
void quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot_index=partition(arr,low,high);
        quick_sort(arr,low,pivot_index-1);
        quick_sort(arr,pivot_index+1,high);
    }
}
void swap(int &a,int&b)
{
    int temp=a;
    a=b;
    b=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<high)
        {
            i++;
        }
        while(arr[j]>pivot&& j>low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],pivot);
    return j;
}
int main()
{
    int arr[]={1,3,5,6,7,8,9,2,1,3,4,5};
    cout<<"Before\t";
    for(int i=0;i<12;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    quick_sort(arr,0,11);
    cout<<"after sorting\t";
    for(int i=0;i<12;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}