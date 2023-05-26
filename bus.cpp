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

		if(x<=10)
		{
			cout<<"Lower Double\n";
		}
		else if(x>10 && x<=15)
		{
			cout<<"Lower Single\n";
		}
		else if(x>15 && x<=25)
		{
			cout<<"Upper Double\n";
		}
		else if(x>25 && x<=30)
		{
			cout<<"Upper Single\n";
		}
	}
	return 0;
}