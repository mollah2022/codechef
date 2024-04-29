#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	      int m,n,x; cin >> m >> n >> x;
	      if(m>50){
	            cout <<"A\n";
	      }
	      else if(n>50){
	            cout <<"B\n";
	      }
	       else if(x>50){
	            cout <<"C\n";
	      }
	      else{
	          cout <<"NOTA\n";
	      }
	}
return 0;
}