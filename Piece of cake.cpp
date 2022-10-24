#include<iostream>
using namespace std;
int main()
{
    int t,i,k;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]==s1[i+1] || s1[i]==s1[i+2])
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"N0\n";
        }
   k=0;
    }
    return 0;
}
