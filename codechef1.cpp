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
		string s1; cin >> s1;
		int a = x/2;
		string s2 = s1.substr(0,a);
		string s3 = s1.substr(a,x-1);
		if(s2==s3)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}