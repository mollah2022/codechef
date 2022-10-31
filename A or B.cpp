#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y,k=0,l=0,m=0,p=0;
        cin>>x>>y;
        k=500-(x*2);
        l=1000-((x+y)*4);
        m=(k+l);
        k=1000-(y*4);
        l=500-((x+y)*2);
        p=(k+l);

        cout<<max(m,p)<<endl;

    }
    return 0;
}
