#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	        int n,m; cin >> n >> m;
	        int a1[n];
	        for(int i=0;i<n;i++){
	               cin >> a1[i];
	        }
	        int count = 0;
	        for(int i=0;i<n;i++){
	               if(a1[i]>=m){
	                     count++;
	               }
	        }
	        cout << count << endl;
	}
	return 0;

}
