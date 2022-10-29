#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y;
        k=21-(x+y);
        if(k<=10)
        {
            cout<<k<<endl;
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}
