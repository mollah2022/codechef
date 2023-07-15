#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,a1=0,b1=0; cin >> t;
	while(t--)
	{
		int x; cin >> x;
		while(x--)
		{
			string s1;
			cin >> s1;
			if(s1=="START38")
			{
				a1++;
			}
			else
			{
				b1++;
			}
		}
		cout << a1 << " " << b1 << endl;
		a1=0,b1=0;
	}

	return 0;
}