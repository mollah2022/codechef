#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count1=0,count2=0; cin >> t;
	while(t--)
	{
		int x,y; cin >> x >> y;
		string s1; cin >> s1;

		int mx = y;
		int mn = y;

		for(int i=0; i<x; i++)
		{   
			if(s1[i]=='L')
			{
				y--;
			}
			else
			{
				y++;
			}
			if(y>mx)
				mx =  y;
			 if (y<mn)
				mn = y;
		}

		cout <<(mx-mn)+1<< endl;
	}
	return 0;
}