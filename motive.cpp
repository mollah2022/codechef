#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,i,maxx=0;
        cin>>x>>y;
        for(i=0;i<x;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a<=y && maxx<b)
            {
                maxx=b;
            }
        }
        cout<<maxx<<endl;
    }
    return 0;
}
