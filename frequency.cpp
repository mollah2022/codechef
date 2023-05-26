#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	for(int value=0;value<=10;value++)
	{
		int count=0;
		for(int i=0;i<=10;i++)
		{
             if(s1[i]==value)
             {
             	count++;
             }
		}

		cout<<value<<"frequency"<<count<<endl;
	}

return 0;
}
#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	int value,count[x];
	for(int value=0;value<=x;value++)
	{
         count[value]=0;
	}
	for(int i=0;i<x;i++)
	{
		value=s1[i];
		count[value]++;
	}
	for(int value=0;value<x;value++)
	{
		cout<<value<<"  FRE  "<<count[value]<<endl;
	}
	return 0;
}