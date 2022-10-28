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
        if(x%4==0)
        {
            cout<<"Good\n";
        }
        else
        {
            cout<<"Not Good\n";
        }
    }
    return 0;
}
