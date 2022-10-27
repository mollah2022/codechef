#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,i,k=0;
        cin>>x;
        int s1[x];
        for(i=0;i<x;i++)
        {
            cin>>s1[i];
            if(s1[i]>=1000)
            {
                k++;
            }
        }
        cout<<k<<endl;
        k=0;
    }
    return 0;
}
