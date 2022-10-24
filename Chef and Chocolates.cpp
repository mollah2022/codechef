#include<iostream>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        k=((x*5)+(y*10))/z;
        cout<<k<<endl;
    }
    return 0;
}
