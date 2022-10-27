#include<iostream>
using namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y%x==0)
        {
            cout<<"YES\n";
        }
        else
        {
            while(1)
            {
                x=x+1;
                y=y+1;
                if(y%x==0)
                {
                    cout<<"YES\n";
                    break;
                }
                else
                {
                    cout<<"NO\n";
                    break;
                }
            }
        }
    }
    return 0;
}
