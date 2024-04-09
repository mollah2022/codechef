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
                     int a1,a2,a3; cin >> a1 >> a2 >> a3;
                     int b1,b2,b3; cin >> b1 >> b2 >> b3;

                     int mark1 = (a1+a2+a3);
                     int mark2 = (b1+b2+b3);

                     if(mark1>mark2){
                           cout <<"DRAGON\n";
                     }
                     else if(mark1<mark2){
                           cout << "SLOTH\n";
                     }
                     else{
                                if(a1>b1){
                                      cout <<"DRAGON\n";
                                }
                                else if(a1<b1){
                                    cout << "SLOTH\n";
                                }
                                else{
                                        if(a2>b2){
                                               cout <<"DRAGON\n";
                                        }
                                        else if(a2<b2){
                                              cout << "SLOTH\n";
                                        }
                                        else{
                                               if(a3>b3){
                                                  cout <<"DRAGON\n";
                                               }
                                               else if(a3<b3){
                                                   cout << "SLOTH\n";
                                               }
                                                 else if(mark1==mark2){
                           cout <<"TIE\n";
                     }
                                        }
                                }
                     }
             }
  return 0;
}