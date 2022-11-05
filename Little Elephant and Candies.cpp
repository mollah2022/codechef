#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,sum=0;
        cin>>x>>y;
        long long int s1[x];
        for(int i=0;i<x;i++)
        {
            cin>>s1[i];
            sum+=s1[i];
        }
        if(y>=sum)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
