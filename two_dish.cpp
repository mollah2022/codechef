//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
              tst{
                     int a,b,c,d; cin >> a >> b >> c >> d;
                     if(c<a){
                           cout <<"NO\n";
                           continue;
                     }
                               int av = b+d;
                               int mn = min(av,c);
                               if(mn>=a){
                                   cout <<"YES\n";
                               }
                               else{
                                   cout <<"NO\n";
                               }
              }
  return 0;
}