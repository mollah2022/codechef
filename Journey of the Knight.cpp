#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,k=0,l=0,q=0,u=0;
        cin>>x1>>y1>>x2>>y2;
        k=abs(x1-x2)+abs(y1-y2);
        if(k%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
