#include<iostream>
using namespace std;
int main()
{
    int t,k=0,l=0,sum=0;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string s1;
        cin>>s1;
        for(int i=0;i<x;i++)
        {
            if(s1[i]==s1[i-1])
            {
                k++;
            }

        }
        cout<<k<<endl;
        k=0;
    }
    return 0;
}
