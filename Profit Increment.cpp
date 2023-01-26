#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int s=0,k=0;
		s=(x-y);
		k=x+(x*10)/100;
		cout<<k-s<<endl;
	}
	return 0;
}