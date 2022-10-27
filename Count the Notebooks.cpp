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
        int k=0;
        k+=(x*1000)/100;
        cout<<k<<endl;
    }
    return 0;
}
