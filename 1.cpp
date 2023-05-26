#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=0,count_1=0;
    cin >> t;
    while(t--)
    {
    	int x;
    	cin >> x;

    	string s1;
    	cin >> s1;

    	for(int i=0;i<s1.size();i++)
    	{
    		if(s1[i]==s1[i+1])
    		{
                count_1++;
    		}
    	}
    	if(count_1==(x-1))
    	{
    		cout<<1<<endl;
    		continue;
    		
    	}

    	for(int i=0;i<s1.size();i++)
    	{

    		if(s1[i]==s1[i+2])
    		{
    			count++;
    		}

    	}
    	if(count==0)
    	{
    		cout<<x-1<<endl;
    	}
    	else 
    	{
    		cout<<x-count<<endl;
    	}
    	count=0;
    }
    return 0;
}