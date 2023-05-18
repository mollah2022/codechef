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
    	int x,y,z,a,b,c;
    	cin >> x >> y >> z;

    	a=(x+y);
    	b=(y+z);
    	c=(z+x);

    	if(a<z || b<x || c<y)
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    }
    return 0;

}