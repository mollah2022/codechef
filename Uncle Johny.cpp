#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
   int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      cin>>k;
      int c=a[k-1];
      sort(a,a+(n));
      for(int i=0;i<n;i++){
          if(a[i]==c)
          cout<<i+1<<endl;
      }
    }
	return 0;
}
