#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,y,m,d;
    cin>>n;
    y=n/365;
    m=(n%365)/30;
    d=((n%365)%30);
    cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days"<<endl;

    return 0;
}