#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,count=0;
        cin>>x;
        int s1[x];
        for(int i=0;i<x;i++)
        {
            cin>>s1[i];
            if(s1[i]>=10 && s1[i]<=60)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
