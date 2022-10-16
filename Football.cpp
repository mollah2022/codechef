#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int s1[x];
        int s2[x];
        int i,j,s3[20],y;
        for(i=0;i<x;i++)
        {
            cin>>s1[i];
        }
        for(j=0;j<x;j++)
        {
            cin>>s2[j];
        }
        for(i=0,j=0;i<x,j<x;i++,j++)
        {
            s3[i]=(s1[i]*20)-(s2[j]*10);
             y=max(s3[i],s3[i+1]);
             s3[i]=0;
        }
        cout<<y<<endl;

    }
    return 0;
}
