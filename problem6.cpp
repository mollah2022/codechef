#include<iostream>
using namespace std;
template<typename t1>
void largest_1(t s1[],int k)
{
    int sum=0;
    for(int j=0;j<k;j++)
    {
        sum+=s1[j];
    }
    cout<<sum<<endl;
}

int main()
{
    int n;
    cin>>n;
    int s1[n];
    for(int k=0;k<n;k++)
    {
        cin>>s1[k];
    }
    largest_1(s1,n);
    return 0;
}
