#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int k;
        k=(z*2)+y;
        if(k>=x)
        {
            cout<<"Qualify\n";
        }
        else
        {
            cout<<"NotQualify\n";
        }
    }
    return 0;
}
