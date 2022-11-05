#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y,p,l;
        cin>>n>>k>>x>>y;
        if(x>y)
        {
            p=(k*x)+(n-k)*y;
            cout<<p<<endl;
        }
        else
        {
            cout<<x*n<<endl;
        }
    }
    return 0;
}
