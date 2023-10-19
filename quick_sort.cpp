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
    int n;
    cout<<"Enter the number of elements\t";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Before Sorting\t";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    quick_sort(arr,0,n-1);
    cout<<"After sorting\t";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}