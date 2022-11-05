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
        if(x%5==0)
        {
            cout<<(x/5)*4<<endl;
        }
        else
        {
            k=x-(x/5);
            cout<<k<<endl;
        }
    }
    return 0;
}
