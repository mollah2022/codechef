#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int k=0;
        k=abs(y-x);
        cout<<k<<endl;
    }
    return 0;
}
