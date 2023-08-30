#include<bits/stdc++.h>
using namespace std;
short no_of_digits(long long int n)
{
    short digits=0;
    while(n>0)
    {
        digits++;
        n/=10;
    }
    return digits;
}
int main()
{
    long long int n;
    cout<<"Enter the number :: "<<endl;
    cin>>n;
    cout<<"The number of digits in "<<n<<" is "<<"\'"<<no_of_digits(n)<<"\'";
    return 9;
}