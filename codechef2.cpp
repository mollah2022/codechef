//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

const int mx = 100123;
int a1[mx];

int32_t main(){
           FAST()
               int n; cin >> n;
               for(int i=0;i<n;i++){
                    cin >> a1[i];
               }
               std::vector<int> v1;
               for(int i=0;i<n;i++){
                int cnt = 0;
                    if(a1[i]!=0){
                             for(int j=i;j<n;j++){
                                     if(a1[j]==0){
                                          break;
                                     }
                                     else{
                                           cnt++;
                                     }
                             }
                    }
                     v1.push_back(cnt);
               }
               int mx = 0;
               for(int i=0;i<v1.size();i++){
                     mx = max(v1[i],mx);
               }
               cout << mx << endl;
  return 0;
}