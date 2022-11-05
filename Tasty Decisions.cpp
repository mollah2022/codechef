#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int k,l;
        k=x*2;
        l=y*5;
        if(k>l)
        {
            cout<<"Chocolate\n";
        }
        else if(k<l)
        {
            cout<<"Candy\n";
        }
        else
        {
            cout<<"Either\n";
        }
    }
    return 0;
}
