#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string r;
        cin>>r;
        int cnt=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] =='1')
                cnt++;
        }
        int count=0;
        for(int i=0; i<r.length(); i++)
        {
            if(r[i] =='1')
                count++;
        }
        if(cnt==count)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
