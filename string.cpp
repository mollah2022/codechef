#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		string s1;
		cin >> s1;
		int a1=0,b1=0,c1=0;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[0]=='A')
			{
				c1=1;
			}
			if(s1[i]=='A' && s1[i+1]=='A')
			{
				a1++;
			}
			else if (s1[i]=='B' && s1[i+1]=='B')
			{
				b1++;
			}
		}
		cout<<a1+c1<<" "<<b1<<endl;
		a1=0,b1=0,c1=0;
	}
	return 0;
}