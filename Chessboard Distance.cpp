#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1,k=0,l=0;
        cin>>x>>y>>x1>>y1;
        k=abs(x-x1);
        l=abs(y-y1);
        cout<<max(k,l)<<endl;
    }
    return 0;
}
