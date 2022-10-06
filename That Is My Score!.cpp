#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int m;
	    cin>>m;
	    int x,y;
	    int a[9]={0};
	    for(int i=0;i<m;i++)
	    {

	        cin>>x>>y;
	        if(x>=1&&x<9&&a[x]<y)
	        {
	            a[x]=y;
	        }
	    }
	     int sum=0;
	    for(int i=0;i<9;i++)
	    {

	        sum+=a[i];
	       a[i]=0;
	    }
	     cout<<sum<<endl;
	}
	return 0;
}
