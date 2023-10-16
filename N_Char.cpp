#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin>>a;
    if(a>= 'a' && a<='z')
    {
        char c=a-32;
        cout<<c<<endl;
    }

    else if(a>='A' && a<='Z')
    {
        char c= a+32;
        cout<<c<<endl;
    }
    return 0;
}