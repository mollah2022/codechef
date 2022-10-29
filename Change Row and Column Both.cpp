#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,x1,y,y1,count=0;
        cin>>x>>x1>>y>>y1;
        if(x==y)
        {
            count++;
        }
        else if (x1==y1)
        {
            count++;
        }
        if(count==1)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<"1\n";
        }
        count=0;
    }
    return 0;
}
