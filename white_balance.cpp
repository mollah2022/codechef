#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	      int a,b,c,d,e; cin >> a >> b >> c >> d >> e;
	      int x = (b-a);
	      int y = d*e;
	      int z = c*e;
	    //  cout << x <<endl << y << endl;
	      if(x>=z && x<=y){
	            cout << 1 << endl;
	      }
	      else{
	            cout << 0 << endl;
	      }
	}
	return 0;
}