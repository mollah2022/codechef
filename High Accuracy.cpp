#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x;
        double p;
        p=ceil ((double)x/3);
        k=(p*3)-x;
        cout<<k<<endl;
    }
    return 0;
}
