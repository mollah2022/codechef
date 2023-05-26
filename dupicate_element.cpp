#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,count=0;
	cin  >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	for(int i=0;i<x;i++)
	{
		for(int j=i+1;j<x;j++)
		{
			if(s1[i]==s1[j])
			{
				cout<<s1[i]<<" "<<endl;
				count++;
				break;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}