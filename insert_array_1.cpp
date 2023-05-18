#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x,position,y;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	cin >> position;
     for(int j=position;j<x;j++)
     {
     	s1[j]=s1[j+1];
     }
     for(int i=0;i<x-1;i++)
     {
     	cout<<s1[i]<<" ";
     }
return 0;

}