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
        if(x<=50)
        {
            cout<<"LEFT\n";
        }
        else
        {
            cout<<"RIGHT\n";
        }
    }
    return 0;
}
