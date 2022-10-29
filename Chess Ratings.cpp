#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y;
        k=(y-x);
        double p;
        p=ceil ((double)k/8);
        cout<<p<<endl;
    }
    return 0;
}
