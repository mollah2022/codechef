#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
           for(int j=0;j<p;j++)
        {
            string s1;
            cin>>s1;
            int k;
            k=s1.size();
            for(int i=0; i<s1.size(); i++)
            {
                if(s1[i]==s1[i+k])
                {
                    cout<<s1<<endl;
                }
                else
                {
                    cout<<s1<<endl;
                }
            }
        }
    }
    return 0;
}
