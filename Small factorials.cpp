#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,i,sum=1;
        cin>>x;
        for(i=1;i<=x;i++)
        {
            sum=sum*i;
        }
        cout<<sum<<endl;
    }
    return 0;
}
