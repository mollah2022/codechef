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
                   int a,b,c,d,e; cin >> a >> b >> c >> d  >> e;
                   int sum = (a+b+c);
                   if(sum<=d && (a<=e || b<=e || c<=e)){
                         cout <<"YES\n";
                        // continue;
                   }
                   else{
                              sum = sum-e;
                              if(sum<=d && (a<=e || b<=e || c<=e)){
                                   cout << "YES\n";
                                   ///cout << sum <<d << endl;
                              }
                              else{
                                   cout << "NO\n";
                              }
                   }
                   sum = 0;
            }
  return 0;
}