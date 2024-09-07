//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";
const int mx = 100123;
int a1[mx],a2[mx];

int32_t main(){
           FAST() 
                tst{
                       int n; cin >> n;
                       for(int i=0;i<n;i++){
                            cin >> a1[i];
                       }
                       for(int i=0;i<n;i++){
                            cin >> a2[i];
                       }
                       vector<int>v1;
                       for(int i=0,j=0;i<n;i++,j++){
                          int res = 0;
                                res +=(a1[i]*20)-(a2[j]*10);
                               if(res<0){
                                   res = 0;
                               }
                               v1.push_back(res);
                       }
                       int mx = 0;
                       for(int i=0;i<v1.size();i++){
                              mx = max(mx,v1[i]);
                       }
                       cout << mx << endl;
                }
  return 0;
}