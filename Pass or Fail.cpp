#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,k,l,p;
        cin>>x>>y>>z;
        k=(y*3);
        l=(x-y)*(-1);
        p=(k+l);
        if(p>=z)
        {
            cout<<"Pass\n";
        }
        else
        {
            cout<<"Fail\n";
        }
    }
    return 0;
}
