#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x,y,z;
		cin >> x >> y >>z;
		int ans1 = (x*y);
		int ans2 = (x+z);
		cout << min(ans1,ans2)<<endl;
	}
	return 0;
}