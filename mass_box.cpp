#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,ans = 0; cin >> t;
	while(t--)
	{
		int x,y; cin >> x >> y;
		int sum = x+y;
		int temp = 0,e = 0;
		while(sum>0)
		{
			temp = sum%10;
			sum/=10;
            e = temp;
			if(e == 0)
			{
                ans+=6;
			}
			if(e == 1)
			{
                ans+=2;
			}
			if(e == 2)
			{
                ans+=5;
			}
			if(e == 3)
			{
                ans+=5;
			}
			if(e == 4)
			{
                ans+=4;
			}
			if(e == 5)
			{
                ans+=5;
			}
			if(e == 6)
			{
                ans+=6;
			}
			if(e == 7)
			{
                ans+=3;
			}
			if(e == 8)
			{
                ans+=7;
			}
			if(e == 9)
			{
                ans+=6;
			}
		}
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}