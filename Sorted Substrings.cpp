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
        string s1;
        cin>>s1;
        for(i=0;i<s1.size()-1;i++)
        {
            if(s1[i]=='1' && s1[i+1]=='0')
            {
                k++;

            }
        }
         cout<<k<<endl;
    }
    return 0;
}
