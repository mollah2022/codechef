#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k,l,p;
        cin>>x;
        int s1[x];
        for(int i=0;i<x;i++)
        {
            cin>>s1[i];
            k=max((s1[i]*20),(s1[i+1]*10));
        }
        for(int j=0;j<x;j++)
        {
            cin>>s1[j];
            l=min((s1[j]*10),(s1[j+1]*10));
        }
      if()
        cout<<p<<endl;
    }
    return 0;
}
