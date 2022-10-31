#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(y==0)
    {
        cout<<"https://www.codechef.com/contests\n";
    }
    else if(x==0)
    {
        cout<<"https://www.codechef.com/practice\n";
    }

    else if(x==1 && y==1)
    {
        cout<<"https://discuss.codechef.com\n";
    }
    return 0;
}
