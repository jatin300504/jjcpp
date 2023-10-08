#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int size)
{
    int i,j;
    bool swapped;
    for(i=0;i<size-1;i++)
    {
        swapped = false;
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
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
    bubblesort(arr,size);
    cout<<"Sorted array::\n";
    PrintArray(arr,size);
    return 0;
}