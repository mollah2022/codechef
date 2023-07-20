#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x; cin >> x;
		int temp = 0,red = x,ans = 0;
		while(red>0)
		{
			temp = red%10;
             ans = ans*10+temp;
             red/=10;
		}
		if(x == ans)
		{
			cout << "wins\n";
		}
		else
		{
			cout << "loses\n";
		}
	}
	return 0;
}