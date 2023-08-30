#include<bits/stdc++.h>
using namespace std;
unsigned short sum_of_digits(long long int n)
{
    unsigned short sod=0;  //sod stands for 'sum of digits'
    while (n>0)
    {
        sod+=n%10;
        n/=10;
    }
    return sod;
}
int main()
{
    long long int n;
    cout<<"Enter the value :\t";
    cin>>n;
    cout<<"The sum of the digits of  "<<n<<"  is "<<sum_of_digits(n);
    return 9;
    }
