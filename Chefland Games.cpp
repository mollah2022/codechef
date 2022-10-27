#include<iostream>
using namespace std;
int main()
{
    int t,p=0,i;
    cin>>t;
    while(t--)
    {
        int s1[20];
        for(i=0;i<4;i++)
        {
            cin>>s1[i];
        }
        for(i=0;i<4;i++)
        {
            if(s1[i]==1)
            {
                p++;
                break;
            }
        }
        if(p==1)
        {
            cout<<"OUT\n";
        }
        else
        {
            cout<<"IN\n";
        }
        p=0;
    }

    return 0;
}
