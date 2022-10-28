#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        double k;
        k=ceil ((double)x/y);
        cout<<z*k<<endl;
    }
    return 0;
}
