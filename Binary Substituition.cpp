#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=0;
        string s1;
        cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
            {
                x++;
            }
            if('a'>1 && 'b'>1)
            {
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
