#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        double k;
        if(x<=y)
        {
            cout<<0<<endl;
        }
        else
        {
        k=ceil(((double)x-y)/4);
        cout<<k<<endl;
        }
    }
    return 0;
}
