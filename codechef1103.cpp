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
                     sort(s1.begin(),s1.end());
                     bool find = false;
                        if(n%2!=0){
                           cout <<"NO\n";
                           continue;
                     }
                     for(int i=0;i<s1.size()-1;i++){
                           if(s1[i]!=s1[i+1]){
                                 find = true;
                                 break;
                           }
                           else{
                               i = i+1;
                           }
                     }
                     //cout << find << endl;
                     if(find == 1){
                           cout <<"NO\n";
                     }
                     else{
                           cout <<"YES\n";
                     }
              }
  return 0;
}