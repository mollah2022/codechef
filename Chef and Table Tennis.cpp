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
        int length=s1.length();
        for(int i=0;i<s1.size();i++)
        {
              if(s1[i]=='1')
            {
                x++;
            }
        }
        if(x>length/2)
        {
            cout<<"WIN\n";
        }
        else
        {
            cout<<"LOSE\n";
        }
    }
    return 0;
}
