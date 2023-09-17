#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,f;
   
    cin>>x>>y;
    f=x/y;
    
    cout<<"floor "<<x<<" / "<<y<<" = "<<floor(f)<<endl;
    cout<<"ceil "<<x<<" / "<<y<<" = "<<ceil(f)<<endl;
    cout<<"round "<<x<<" / "<<y<<" = "<<round(f)<<endl;
    return 0;
}