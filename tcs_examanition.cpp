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
               int32_t a1,b1,c1; cin >> a1 >> b1 >> c1;
               int32_t a2,b2,c2; cin >> a2 >> b2 >> c2;

                ll mark1 = (a1+b1+c1);
                ll mark2 = (a2+b2+c2);
                if(mark1 > mark2){
                      cout <<"DRAGON\n";
                }
                else if(mark1<mark2){
                    cout <<"SLOTH\n";
                }
                else{
                        if(a1>a2){
                              cout <<"DRAGON\n";
                        }
                        else if(a1<a2){
                              cout <<"SLOTH\n";
                        }
                        else{
                               if(b1>b2){
                                    cout <<"DRAGON\n";
                               }
                               else if(b1<b2){
                                    cout <<"SLOTH\n";
                               }
                               else{
                                   cout <<"TIE\n";
                               }
                        }
                }
            }
  return 0;
}