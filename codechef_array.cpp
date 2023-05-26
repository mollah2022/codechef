#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=0;
	cin >> t;

	while(t--)
	{
		int x,y;
		cin >> x >> y;
		for(int i=x;i<=y;i++)
		{
			if(i%10==2 || i%10==3 || i%10==9)
			{
				count++;
			}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}