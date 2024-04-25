#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long  int x,p=0,s=0,r=0;
        cin>>x;
        if(x%2==0)
        {
            s=(x/2);
            r=(x/2);
        }
        else
        {
            s=(x/2);
            r=((x+1)/2);
        }
        p=s*r;
        if(x<=1)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<p*2<<endl;
        }
    }
    return 0;
}
