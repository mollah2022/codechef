#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	      int a,b,c,d; cin >> a >> b >>c >> d;
	      int x = a+((double)(a*d)/100);
	     // cout << x << endl;
	      if(x>=b && x<=c){
	            cout << "Yes\n";
	      }
	      else{
	          cout << "No\n";
	      }
	}
	return 0;
}