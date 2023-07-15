#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x,y;
		cin >> x >> y;
		double s1 = 0;
		s1 = x-(double)x*10/100;
		if(s1 >y)
		{
			 cout << "DINING\n";
		}
		else if (y > s1)
		{
			cout << "ONLINE\n";
		}
		else
		{
			cout << "EITHER\n";
		}
	}
	return 0;
}