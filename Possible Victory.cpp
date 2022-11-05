#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int k,p=0,l;
    l=(20-y);
    k=(l*6)*6;
    p=(z+k);
    if(p>x)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
