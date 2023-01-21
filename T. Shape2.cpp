#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,i,j;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x-i;j++)
		{
           cout<<" ";
		}
		for(int k=1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}