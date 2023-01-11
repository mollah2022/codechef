#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,rem,count=0;
		cin>>x;
		while(x>0)
		{
			rem=x%10;
			if(rem==7)
			{
				count++;
			}
			x=x/10;
		}
		if(count>=1)
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