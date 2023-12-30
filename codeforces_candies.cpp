#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            tst{
                ll n; cin >> n;
                ll a1[2*n];
                for(int i=0;i<(2*n);i++){
                     cin >> a1[i];
                }
                bool ria = false;
                for(int i=0;i<(2*n);i++){
                    int count = 0;
                    for(int j=i;j<(2*n);j++){
                          if(a1[i]==a1[j]){
                               count++;
                          }
                    }
                   // cout << count << endl;
                    if(count>2){
                        ria = true;
                        break;
                    }
                }
                if(ria == 1){
                    cout <<"No\n";
                }
                else{
                    cout <<"Yes\n";
                }
               
            }      
     return 0;
}