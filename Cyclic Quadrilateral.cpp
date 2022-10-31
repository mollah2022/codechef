#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,w,p,l;
        cin>>x>>y>>z>>w;
        p=(x+z);
        l=(y+w);
        if(p==180 && l==180)
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
