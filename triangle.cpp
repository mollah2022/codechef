#include<bits/stdc++.h>
using namespace std;

void result(int x,int y,int z)
{
	if(x!=y && y!=z && x!=z)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
     
     int t;
     cin >> t;

     while(t--)
     {
     	int x,y,z;
     	cin >> x >> y >> z;
     	result(x,y,z);
     }
}