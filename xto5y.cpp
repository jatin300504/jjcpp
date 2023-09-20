#include<bits/stdc++.h>
using namespace std;
void check(string c)
{
    for(char &ch: c)
    {
       if(ch=='x')
       {
        cout<<"yyyyy";
       }
       else 
       cout<<ch;
    }
}
int main()
{
    string str;
    cout<<"Enter the string :"<<endl;
    getline(cin,str);
    check(str);

}