#include<iostream>
using namespace std;
int main()
{
    int t,k=0,p=0;
    cin>>t;
    while(t--)

    {
        int x,y,sum=0;
        cin>>x>>y;
        for(int i=0; i<x; i++)
        {
            if(x>1)
            {
                for(int j=2; j<=y; j++)
                {
                    for(int n=2;i<y;n++)
                    {

                    if(j%n!=0)
                    {
                        k++;
                    }
                    }
                }
            }
        }
        for(int i=0; i<y; i++)
        {
            if(y<=1)
            {
                for(int j=2; j<y-1; j++)
                {
                    if(y%j!=0)
                    {
                        p++;
                    }
                }
            }


        }
        sum=(k+p);
        cout<<sum<<endl;
    }
    return 0;
}
