#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        double k;
        k=ceil ((double)x/4);
        cout<<k<<endl;
    }
    return 0;
}
