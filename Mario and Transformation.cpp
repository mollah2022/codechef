#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        if(k%3==0)
        {
            cout<<"NORMAL\n";
        }
        else if(k%3==1)
        {
            cout<<"HUGE\n";
        }
        else
        {
            cout<<"SMALL\n";
        }
    }
    return 0;
}
