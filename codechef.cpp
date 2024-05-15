#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	       int n,m; cin >> n >> m;
	      while(m--){
	      	    if(n<1000){
	      	    	  n+=1000;
	      	    }
	      	    else{
	      	    	  n*=2;
	      	    }
	      }
	      cout << n << endl;
	}
return 0;
}