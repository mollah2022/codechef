#include <iostream>
using namespace std;

int main() {
	int t,n,m,k,a;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>k;
	    if(n>=m)
	    {
	        a=n-m;
	    }
	    else
	    {
	        a=m-n;
	    }
	    if(a<=k)
	    {
	        cout<<0<<'\n';
	    }
	    else
	    {
	        cout<<a-k<<'\n';
	    }
	}
	return 0;
}
