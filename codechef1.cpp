//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
               tst{
                     int n,m,x; cin >> n >>  m >> x;
                     int ans = (n*m);
                     int cnt = 0;
                     if(n%3==0){
                         cnt +=(n/3)-1;
                     }
                     else{
                          cnt +=(n/3);
                     }
                     ans +=(cnt*x);
                     cout << ans << endl;
               }
  return 0;
}