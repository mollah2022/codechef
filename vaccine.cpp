#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	    ios_base::sync_with_stdio(0);
	    cin.tie(0);

	    int  t; cin >> t;
	    while(t--){
	    	   int n,m,x; cin >> n >> m >> x;
	    	   if(n>= m && n<=x){
	    	   	    cout <<"Take second dose now\n";
	    	   }
	    	   else if(n>m && n>x){
	    	   	   cout <<"Too Late\n";
	    	   }
	    	   else{
	    	   	   cout <<"Too Early\n";
	    	   }
	    }
	    return 0;
}