#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,x,y,z,k=0,l=0,p=0,f=0;
        cin>>w>>x>>y>>z;
        k=(x+y);
        l=(y+z);
        p=(x+z);
        f=(x+y+z);
        if(k==w||l==w||p==w||x==w||y==w||z==w||f==w)
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
