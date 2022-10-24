#include<iostream>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x<=300)
        {
            cout<<(300*10)<<endl;
        }
        else
        {
            cout<<(x*10)<<endl;
        }
    }
    return 0;
}
