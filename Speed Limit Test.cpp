#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,w,k,l;
        cin>>x>>y>>z>>w;
        k=(x/y);
        l=(z/w);
       if(k>l)
       {
           cout<<"Alice\n";
       }
       else if(l>k)
       {
           cout<<"Bob\n";
       }
       else
       {
           cout<<"Equal\n";
       }
    }
    return 0;
}
