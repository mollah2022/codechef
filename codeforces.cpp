#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,ans = 0;
    string s1;
    while(cin >> t)
    {
	while(t--)
	{
	    cin >> s1;
        if(s1=="Tetrahedron")
        	ans+=4;
        else if(s1=="Cube")
        	ans+=6;
        else if(s1=="Octahedron")
        	ans+=8;
        else if(s1=="Dodecahedron")
        	ans+=12;
        else
        	ans+=20;
	}
    cout << ans << endl;
}
	return 0;
}