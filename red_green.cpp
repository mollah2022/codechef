#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=0;
	cin >> t;

	while(t--)
	{
		int  x,y,found=0;
		cin >> x >> y;
		int s1[x];
		for(int i=0;i<x;i++)
		{
			cin >> s1[i];
		}
		for(int i=0;i<x;i++)
		{
			
				if(s1[i]>y)
				{
					count++;
				}
		}
	 
	   	  	cout << count << endl;
	   
		count=0;
	}
	return 0;
}