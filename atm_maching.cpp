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
                   int n,m; cin >> n >> m;
                   int a1[n];
                   int amount = 0;
                   vector<int>v1;
                   for(int i=0;i<n;i++){
                           cin >> a1[i];
                   }
                  for(int i=0;i<n;i++){
                    if(m>=a1[i] && amount<m){
                          amount+=a1[i];
                          v1.push_back(1);
                          if(amount>m){
                             amount-=a1[i];
                             v1.erase(v1.begin()+i);
                             v1.push_back(0);
                          }
                    }
                    else{
                        v1.push_back(0);
                    }
                  }
                  for(int i=0;i<v1.size();i++){
                      cout << v1[i];
                  }
                  cout << endl;
                  //cout << v1.size() << endl;
            }
  return 0;
}