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
                 string s1; cin >> s1;
                 int count = 0;
                 if(s1.size()<=3){
                    yes
                    continue;
                 }
                 for(int i=0;i<s1.size();i++){
                    if(s1[i]!='a'&& s1[i]!='e'&&s1[i]!='o'
                        &&s1[i]!='i'&&s1[i]!='u'){
                         count++;
                     if(count>=4){
                          break;
                     }
                    }
                    else{
                        count=0;
                    }
                
                } 
                if(count>=4){
                    no
                }
                else{
                    yes
                }
            }
  return 0;
}