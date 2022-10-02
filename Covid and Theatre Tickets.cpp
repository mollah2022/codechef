#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=a-(a/2);
        int y=b-(b/2);
        cout<<x*y<<endl;
    }
    return 0;
}
