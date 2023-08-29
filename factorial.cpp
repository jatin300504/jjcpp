#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long int result=1;
    cout<<"Enter the number for finding factorial:\t";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       result=result*i;   
    }
    cout<<n<<"! ="<<result;
    return 9;

}