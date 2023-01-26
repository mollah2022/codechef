#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z,w;
		cin>>x>>y>>z>>w;
         map<int,int>m;
         for(int i=x;i<=y;i++)
         {
         	m[i]=i;
         }
         for(int i=z;i<=w;i++)
         {
         	m[i]=i;
         }
         cout<<m.size()<<endl;
	}
	return 0;
}