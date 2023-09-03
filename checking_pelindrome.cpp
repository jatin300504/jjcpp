#include<bits/stdc++.h>
using namespace std;
bool check_pelindrome(long long int n)
{
    long long int c=n;
    bool m;
    long long int k=0;
    while(n>0)
    {
        k=k*10+(n%10);
        
        n/=10;
    }
    if(k==c)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    long long int k;
    cout<<"Enter value\n";
    cin>>k;
    if(check_pelindrome(k))
    {
        cout<<"YES";
    }
    else
    cout<<"YES";
}