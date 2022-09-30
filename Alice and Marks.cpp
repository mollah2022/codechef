#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum=1;
        cin>>x;
        int s1[x];
        for(int i=0;i<x;i++)
        {
            cin>>s1[i];
            sum*=s1[i];

        }
        if(sum>=0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
        }
    }
    return 0;
}
