#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,c,d,x;
        cin>>a>>b>>c>>d;
         x=a+(a*d/100);
        if( x<=c && x>=b )
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        x=0;
    }
    return 0;
}
