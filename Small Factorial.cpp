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
        int k=1;
        for(int i=1;i<=x;i++)
        {
            k*=i;
        }
        cout<<k<<endl;
    }
    return 0;
}
