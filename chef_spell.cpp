#include <bits/stdc++.h>
using namespace std;

int main() {
	  int t; cin >> t;
	  while(t--){
	         int n,m,x; cin >> n >> m >> x;
	         if(n<=m && n<=x){
	             cout << m+x << endl;
	         }
	         else if(m<=n && m<=x){
	             cout << n+x << endl;
	         }
	         else{
	             cout << n+m << endl;
	         }
	  }
   return 0;
}
