#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=0; cin >> t;
	while(t--)
	{
		int x; cin >> x;
		int a1[x];
		for(int i=0; i<x; i++)
		{
			cin >> a1[i];
		}
		for(int i=0; i<x; i++)
		{
			if(a1[i]==a1[i+1])
			{
				count++;
			}
			
		}
		cout << x-count << endl;
		count =0;
	}
	return 0;
}