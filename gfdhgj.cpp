#include<iostream>
using namespace std;
int main()
{
   long long int x,k=0,l=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int a;
        cin>>a;
        k+=a;
    }
    l=(x*(x+1))/2;
    if(k==l)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
