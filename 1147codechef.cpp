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
                    int n,k; cin >> n >> k;
                    int sum = 0;
                    while(n--){
                          int a,b; cin >> a >> b;
                          if(k>=a){
                               k = k -a;
                          }
                          else{
                                sum +=(a-k)*b;
                                 k = 0;

                          }
                    }
                    cout << sum << endl;
             }
  return 0;
}