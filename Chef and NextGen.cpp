#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,w;
        cin>>x>>y>>z>>w;
        int p,l;
        p=(x*y);
        l=(z*w);
        if(l>=p)
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
