#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x,y; cin >> x >> y;
		double s1 = 0,s2 = 0;
		s1 = 100-(100*(double)x/100);
	    s2 =200-(200*(double)y/100);
	    	if(s1>s2 )
	    	{
               cout << "SECOND\n";
	    	}
	    	else if (s1 < s2)
	    	{
               cout << "FIRST\n";
	    	}
	    	else
	    	{
	    		cout << "BOTH\n";
	    	}
	}
	return 0;
}