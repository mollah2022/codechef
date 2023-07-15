#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int x,y,z,w; cin >> x >> y >> z >> w;
		int mx1 = 0, mx2 = 0, mx = 0;
		mx1 = max(x,y); mx2 = max(z,w); mx = max(mx1,mx2);
		if(mx != x && mx != y && mx!=z && (x+y+z)<mx)
		{
			cout << "YES\n";
		}
		else if(mx != x && mx != y && mx!=w && (x+y+w)<mx)
		{
			cout << "YES\n";
		}
		else if(mx != x && mx != w && mx!=z && (x+w+z)<mx)
		{
			cout << "YES\n";
		}
		else if(mx != w && mx != y && mx!=z && (w+y+z)<mx)
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