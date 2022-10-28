#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,x1,y,y1;
        cin>>x>>x1>>y>>y1;
        if(x1<y1)
        {
            cout<<"P\n";
        }
         else if(y1<x1)
        {
            cout<<"Q\n";
        }
        else
        {
            cout<<"TIE\n";
        }

    }
    return 0;
}
