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
        double k,l;
        k=ceil((double)x/10);
        l=ceil((double)y/10);
        cout<<abs(k-l)<<endl;
    }
    return 0;
}
