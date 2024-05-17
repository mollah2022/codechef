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
                    int  bob = 0;
                    int limak = 0;
                    int i = 1;
                    while(1){
                            if(i%2==0){
                                  bob+=i;
                                  if(bob>m){
                                       cout <<"Limak\n";
                                       break;
                                  }
                            }
                            else{
                                    limak+=i;
                                    if(limak>n){
                                           cout << "Bob\n";
                                           break;
                                    }
                            }
                            i++;
                    }
                    
               }
  return 0;
}