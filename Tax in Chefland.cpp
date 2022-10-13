#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,s=0;
        cin>>x;
        if(x>100)
        {
            cout<<x-10<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
    return 0;
}
