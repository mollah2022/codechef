#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        float s=pow((0.143*a),(float)a);
       cout<<round(s)<<endl;
    }
    return 0;
}
