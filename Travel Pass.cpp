#include<iostream>
using namespace std;
int main()
{
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        int x,y,z,c=0,p=0;
        cin>>x>>y>>z;
        string s1;
        cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='0')
            {
                c++;
            }
            else
            {
                p++;
            }
        }
        sum=(y*c)+(z*p);
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
