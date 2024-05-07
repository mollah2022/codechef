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
                   //int a1[3];
                   int n,m,x; cin >> n >> m >> x;
                   if(n==0 && m==0 && x==0 ){
                        cout <<"Water filling time\n";
                   }
                   else if(n==0 && m==0){
                        cout << "Water filling time\n";
                   }
                   else if(m==0 && x==0){
                       cout << "Water filling time\n";
                   }
                   else if(n==0 && x==0){
                       cout << "Water filling time\n";
                   }
                   else{
                        cout << "Not now\n";
                   }
             }
  return 0;
}