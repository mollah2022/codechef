#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,a,b,l,p;
        cin>>x>>y>>z;
        a=max(x,y);
        b=max(a,z);
        l=min(x,y);
        p=min(l,z);
        cout<<b-p<<endl;

    }
    return 0;
}
