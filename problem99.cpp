#include<iostream>
using namespace std;
template<typename s2>
void sajib_big(s2 s1[],int x)
{
    int j,maxx=0;
    maxx=s1[0];
    for(j=0;j<x;j++)
    {
        if(maxx<s1[j])
        {
            maxx=s1[j];
        }
    }
    cout<<maxx<<endl;
}
int main()
{
    int x;
    cin>>x;
    int s1[x];
    for(int i=0;i<x;i++)
    {
        cin>>s1[i];
    }
    sajib_big(s1,x);
    return 0;
}
