#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,item,position;
	cin >> x;

	int s1[x],s2[x+1];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
		s2[i]=s1[i];
	}
     cin >> position >> item;
	int p=x-1;
	while(position<=p)
	{
		s2[p+1]=s1[p];
		p--;
	}
	s2[position]=item;

	for(int i=0;i<x+1;i++)
	{
		cout<<s2[i]<<" ";
	}
	return 0;
}