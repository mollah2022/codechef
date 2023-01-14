#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x=0,y=0;
	cin>>t;
	while(t--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
        x=((x1*x1)+(y1*y1));
        y=((x2*x2)+(y2*y2));
        if(x>y)
        {
        	cout<<"ALEX\n";
        }
        else if(x<y)
        {
        	cout<<"BOB\n";
        }
        else
        {
        	cout<<"EQUAL\n";
        }
	}
	return 0;
}