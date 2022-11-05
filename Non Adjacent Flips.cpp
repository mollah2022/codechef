#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k=0,p=0;
        cin>>x;
        string s1;
        cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='1' && s1[i+1]=='1')
            {
                k++;

            }
            else if(s1[i]=='1')
            {
                p++;

            }

        }
        if(p==0)
        {
            cout<<0<<endl;
        }
        else if(k==0)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"2\n";
        }
    }
    return 0;
}
