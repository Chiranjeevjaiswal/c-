#include<iostream>
using namespace std;
int main()
{
    float p,t,r,si;
    cout<<"enter the principle:";
    cin>>p;
    cout<<"enter the time:";
    cin>>t;
    cout<<"enter the rate:";
    cin>>r;
    si=(p*r*t)/100;
    cout<<"simple interest is= \n"<<si;
    return 0;
}
