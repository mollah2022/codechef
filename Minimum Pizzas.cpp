#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,d;
        cin>>a>>b;
        d=(a*b);
        double sum=0;
        sum=(double)d/4;
        cout<<ceil(sum)<<endl;
    }
    return 0;
}
