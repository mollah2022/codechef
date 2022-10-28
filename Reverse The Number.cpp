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
        int temp,rev=0;
        while(x!=0)
        {
            temp=x%10;
            rev=rev*10+temp;
            x=x/10;
        }
        cout<<rev<<endl;
    }
    return 0;
}
