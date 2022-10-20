#include<iostream>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x=(a+b);
        y=(b+c);
        z=(c+a);
        if(x%2!=0 || y%2!=0 || z%2!=0)
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
