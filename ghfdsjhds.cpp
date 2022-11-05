#include<iostream>
using namespace std;

class sojib
{
    public:
    template<typename s2>
    void sajib()
    {
        int x;
        cin>>x;
        int s1[x];
     int j,maxx=0;
     maxx=s1[0];
    for(j=0;j<x;j++)
    {
        cin>>s1[j];
        if(maxx<s1[j])
        {
            maxx=s1[j];
        }
    }
    cout<<maxx<<endl;
    }
};
int main()
{
    sojib ob1;
    ob1.sajib();
}

