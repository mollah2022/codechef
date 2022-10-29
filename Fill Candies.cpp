#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,l;
        cin>>x>>y>>z;
        l=(y*z);
        double k;
        k=ceil ((double)x/l);
        cout<<k<<endl;
    }
    return 0;
}
