#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,r=0,i;
        cin>>x>>y>>z;
        for(i=0;i<x&&z>0;i++)
        {
            if(z>=y)
            {
                r+=(y*y);
                z-=y;
            }
            else{
                r+=(z*z);
                break;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
