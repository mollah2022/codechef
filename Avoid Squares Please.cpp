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
        for(int i=x;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
