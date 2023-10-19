
#include <iostream>

using namespace std;
void mergee(int arr[],int,int,int);
void merge_sort(int arr[],int low,int high)
{
    if(low>=high)return;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    mergee(arr,low,mid,high);
}
void mergee(int arr[],int low,int mid,int high)
{
    int temp[high+1];
    int i=0;
    int left=low;
    int right=mid+1;
    while(left<=mid  &&  right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp[i]=arr[left];
            i++;
            left++;
        }
        else
        {
            temp[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid)
    {
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high)
    {
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array\t";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"before Sorting"<<endl;
    for(int i=0;i<n;i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    merge_sort(arr,0,n-1);
    cout<<"after merge sort"<<endl;
    for(int i=0;i<n;i++ )
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    delete [] arr;
    return 0;
}