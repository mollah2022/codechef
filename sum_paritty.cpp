#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int main() {
	  FAST
	    tst{
	       int n; cin >> n;
	       int a1[n];
	       int sum = 0;
	       for(int i=0;i<n;i++){
	             cin >> a1[i];
	             sum+=a1[i];
	       }
	       if(sum%2==0){
	           cout <<"YES\n";
	       }
	       else{
	           cout <<"NO\n";
	       }
	}
	return 0;

}
