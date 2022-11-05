#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int s1[t];
    for(int i=0;i<t;i++)
    {
        cin>>s1[i];
    }
    int k,l=0;
    cin>>k;
    for(int i=0;i<t;i++)
    {
        if(s1[i]%10==k)
        {
            l++;
        }
    }
    cout<<l<<endl;
    return 0;
}
