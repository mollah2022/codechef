#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x,y,z,w,p; cin >> x >> y >> z >> w >> p;
		int count = 1;
		while(z--)
		{
			int p1,p2; cin >> p1 >> p2;
			int ans1 = 0;
			int ans2 = 0;
			ans1 = abs(w-p1);
			ans2 = abs(p-p2);
			if((ans1+ans2)%2==0)
			{
				count=0;
			}
		}
		if(count == 0)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}
 return 0;
}