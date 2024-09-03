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
                      int cnt = 0;
                      string s1; cin >> s1;
                      int l  = s1.size()-1;
                      sort(s1.begin(),s1.end());
                      if(s1.size()==1 && s1[0]=='I'){
                           cout <<"INDIAN\n";
                           continue;
                      }
                       if(s1.size()==1 && s1[0]=='Y'){
                           cout <<"NOT INDIAN\n";
                           continue;
                      }
                      for(int i=0;i<s1.size();i++){
                           if(s1[0]=='N' && s1[l]=='Y'){
                                      cout <<"NOT INDIAN\n";
                                      break;
                           }
                         else  if(s1[0]=='I' && s1[l]=='N'){
                                cout <<"INDIAN\n";
                                      break;
                         }
                         else if(s1[i]=='N'){
                               cnt++;
                         }
                         if(cnt==s1.size()){
                           cout <<"NOT SURE\n";
                      }
                      }
            }
  return 0;
}