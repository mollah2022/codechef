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
        if(x>=y)
        {
            cout<<(2*x)-y<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
    return 0;
}
