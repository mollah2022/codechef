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
        if(x%5!=0)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<(x/10)+((x%10)/5)<<endl;
        }


    }
    return 0;
}
