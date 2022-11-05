#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int k,l,m,n;
        k=max(x,y);
        l=max(k,z);
        m=min(x,y);
        n=min(m,z);
        cout<<l-n<<endl;
    }
    return 0;
}
