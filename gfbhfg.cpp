#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    int l=s1.length();
    int t;
    cin>>t;
    while(t--)
    {
        int k=0;
        cin>>s2;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                {
                    k++;
                }
            }
        }
        if(l==k)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
