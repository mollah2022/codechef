#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		string s1,s2; cin >> s1 >> s2;
		for(int i=0; i<5; i++)
		{
			if(s1[i]==s2[i])
			{
				cout <<"G";
			}
			else
			{
				cout << "B";
			}
		}
		cout << endl;
	}
	return 0;
}