// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char a[100],b[100],c[100],d[100];
//     cin>>a>>b;
//     cin>>c>>d;

//     if(strcmp(b,d)==0) 
//     {
//         cout<<"ARE Brothers"<<endl;
//     }
//     else
//     {
//         cout<<"NOT"<<endl;
//     }     
//     return 0;
// }
#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[100],d[100];
    scanf("%s %s",&a,&b);
    scanf("%s %s",&c,&d);

    if(strcmp(b,d)==0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }

    return 0;
}