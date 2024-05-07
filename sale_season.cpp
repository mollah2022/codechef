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
                   int n; cin >> n;
                   if(n<=100){
                       cout << n << endl;
                   }
                   else if(n>100 && n<=1000){
                       cout << n-25 << endl;
                   }
                   else if(n>1000 && n<=5000){
                       cout << n-100 << endl;
                   }
                   else{
                        cout << n-500<< endl;
                   }
             }
  return 0;
}