#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,c,d,p,q;
        cin>>a>>b>>c>>d;
        p=(a/c);
        q=(b/d);
        if(p<q)
        {
            cout<<"Chef\n";
        }
        else if(p==q)
        {
            cout<<"Both\n";
        }
        else
        {
            cout<<"Chefina\n";
        }
    }
    return 0;
}
