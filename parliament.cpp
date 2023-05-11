#include<bits/stdc++.h>
using namespace std;

void result(double x,double y)
{
	if(x/y<=2)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
    
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
     
     int t;
     cin >> t;

     while(t--)
     {
     	double x,y;
     	cin >> x >> y;
     	result(x,y);
     }
}