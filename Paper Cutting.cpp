#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,s=0;
        cin>>x>>y;
        s=(x/y);
        cout<<s*s<<endl;
    }
    return 0;
}
