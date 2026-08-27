#include<iostream>
using namespace std;
int  main()
{
    int n,a=0,b=1,c;
    cout<<"enter the no. of term:";
    cin>>n;
    cout<<"fibbanonic series:";
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}
