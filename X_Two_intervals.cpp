#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<=c && c<=b)
    {
        if(d>=b) cout<<c<<" "<<b<<endl;
        else if(d<=d) cout<<c<<" "<<d<<endl;
    }
    else if(a>=c && a<=d)
    {
        if(b>=d) cout<<a<<" "<<d<<endl;
        else if(b<=d) cout<<a<<" "<<b<<endl;
    }
    else 
    {
        cout<<-1<<endl;
    }
   
    return 0;
} 