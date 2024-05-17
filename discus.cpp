#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	       int n,m,x; cin >> n >> m >> x;
	       int ans = max({n,m,x});
	       cout << ans << endl;
	}
	return 0;

}
