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
                     string s1; cin >> s1;
                     string s2="";
                     for(int i=0;i<s1.size();i++){
                            if(s1[i]=='A'){
                                  s2+='T';
                            }
                            else if(s1[i]=='T'){
                                  s2+='A';
                            }
                            else if(s1[i]=='G'){
                                  s2+='C';
                            }
                            else{
                                  s2+='G';
                            }
                     }
                     cout << s2 << endl;
               }
  return 0;
}