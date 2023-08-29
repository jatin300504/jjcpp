#include<bits/stdc++.h>
using namespace std;
         //Greatest element function will return Greatest value of array(parameter)
int greatest_element(int array[],int size)  
{
    //considering greatest as '0'
    int  greatest=0;    
    for(int i=0;i<size;i++)   
    {
        
        if(greatest<array[i])      //If the next element is greater than present then greater will assign the value of next
        {
            greatest=array[i];
        }
    }

    return greatest;            // Returnng greatest number value
}
int main()
{
    int n;
    cout<<"Enter the size of the array: \t";         //Asking user the size of the array
    cin>>n;
    int array[n];
    cout<<"Enter the elements in the array:\n";     //User will enter an elements
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The greatest element is "<<greatest_element(array,n);     //Printing the greatest element in an array
    return 0;

}
