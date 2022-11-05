#include<bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        int n;
        int arr[n+1];
        int sum=0;

        cin>>n;

        if(n>77)
        {

            throw -1;

        }

        for(int i=0; i<n; i++)
        {


            cin>>arr[i];


        }

        for(int i=0; i<n; i++)
        {

            sum+=arr[i];

        }

        cout<<sum;

    }

    catch(...)
    {

        cout<<"Exceptional";

    }

}
