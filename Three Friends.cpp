#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if( a+b==c|| b+c==a ||c+a == b)
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
    return 0;
}
