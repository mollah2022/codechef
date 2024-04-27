#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	       int a,b; cin >> a >> b;
	         int mx = 0;
	       while(a--){
	             int n,m; cin >> n >> m;
	             if(b>=n){
	                 mx = max(mx,m);
	             }
	       }
	       cout << mx << endl;
	       mx = 0;
	}
  return 0;
}