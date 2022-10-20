#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,i,j,k=0,p=0;
        cin>>x;
        int s1[x];
        for(i=0;i<x;i++)
        {
            cin>>s1[i];
        }
        for(i=0;i<x;i++)
        {
            k=s1[i]-s1[i-1]+1;
            p=(k*(k+1))/2;

        }
        p-=(s1.size()-2);
        cout<<p<<endl;

    }
    return 0;
}
