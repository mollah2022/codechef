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
		int a1[x];
		for(int i=0; i<x; i++)
		{
			cin >> a1[i];
		}
		sort(a1,a1+x);
		if(x%2!=0)
		{
			cout << "NO\n";
		}
		else
		{
			bool ans = true;
			for(int i=0; i<x; i=i+2)
			{
				if(a1[i]!=a1[i+1])
				{
                      ans = false;
                      break;
				}
			}
			if(!ans)
			{
				cout << "NO\n";
			}
			else
			{
				cout << "YES\n";
			}
		}
	}
	return 0;
}