#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y,z; cin >> x >> y >> z;
		int sum = (z/30);
		int sum1 = (sum+x);
		double ans = ceil(((double)sum1/y));
		cout << ans <<endl;
	}
	return 0;
}