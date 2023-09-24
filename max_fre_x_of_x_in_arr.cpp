#include<bits/stdc++.h>
using namespace std;
int max_frequency_count(vector<int>a,int target)
{
    int fre=0;
    for(int i=0;i<a.size();i++)
    {
        if(target==a[i])
        {
            fre++;
        }
    }
    return fre;
}
int main()
{
    int a,n;
    vector <int>array;
    cout<<"Enter the no of Elements in an array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        array.push_back(k);
    }
    cout<<"Enter the value which you would like to search in array: "<<endl;
    cin>>a;
    cout<<"The no of times "<<a<< "  present in an array is: "<<max_frequency_count(array,a)<<endl;
}