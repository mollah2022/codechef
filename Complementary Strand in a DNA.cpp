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
        string s1;
        cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='A')
            {
                s1[i]='T';
            }
            else if(s1[i]=='T')
            {
                s1[i]='A';
            }
            else if(s1[i]=='C')
            {
                s1[i]='G';
            }
            else
            {
                s1[i]='C';
            }
        }
        cout<<s1;
        cout<<endl;
    }
    return 0;
}
