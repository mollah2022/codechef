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
                      int n; cin >> n;
                      int a1[n];
                      for(int i=0;i<n;i++){
                            cin >> a1[i];
                      }
                      for(int i=0;i<n-1;i++){
                           if(a1[i]>a1[i+1]){
                                int a = a1[i];
                                a1[i] = a1[i+1];
                                a1[i+1] = a;
                                break;
                           }
                      }
                      int cnt = 0;
                      for(int i=0;i<n-1;i++){
                           if(a1[i]>a1[i+1]){
                               cnt++;
                               break;
                           }
                      }
                      if(cnt==0){
                           cout <<"YES\n";
                      }
                      else{
                          cout <<"NO\n";
                      }
               }
  return 0;
}