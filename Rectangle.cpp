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
        if(x==y&&z==w||x==z&&y==w||x==w&&y==z)
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
