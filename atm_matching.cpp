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
                    int n,m; cin >> n >> m;
                    int a1[n];
                    for(int i=0;i<n;i++){
                          cin >> a1[i];
                    }
                    int amount = 0;
                    vector<int>v1;
                    for(int i=0;i<n;i++){
                          amount+=a1[i];
                          if(amount<=m){
                              v1.push_back(1);
                          }
                          else{
                               amount-=a1[i];
                               v1.push_back(0);
                          }
                    }
                    for(int i=0;i<v1.size();i++){
                          cout << v1[i];
                    }
                    cout << endl;
             }
  return 0;
}