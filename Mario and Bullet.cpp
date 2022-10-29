#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int k;
        k=(y/x);
        if(k>z)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<z-k<<endl;
        }
    }
    return 0;
}
