#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;

		if(x%2==0 && x%7==0)
		{
			cout<<"Alice\n";
		}
		else if(x%2!=0 && x%9==0)
		{
			cout<<"Bob\n";
		}
		else
		{
			cout<<"Charlie\n";
		}
	}
	return 0;
}