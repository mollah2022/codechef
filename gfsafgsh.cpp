#include<iostream>
using namespace std;
template<typename s2>
void sajib_sum(s2 s1[],int x)
{
    int sum=0;
    for(int j=0;j<x;j++)
    {
        sum+=s1[j];
    }
    cout<<sum<<endl;
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
    sajib_sum(s1,x);
    return 0;
}
