#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define sajib ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
#ifndef ONLINE_JUDGE
#else
#define dbg(x...)
#endif
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
   return uniform_int_distribution<int>(l, r) (rng);
}

int32_t main(){
    
      sajib
      tst{
         int x,y; cin >> x >> y;
         vector < int > v1;
         int found = 0,sum = 0;
          if(x>y){
              cout << -1 << endl;
              continue;
           }
           else{
               for(int i=1;i<=y;i++){
                   for(int j=2;j<=i;j++){
                       if(j%2==0){
                          sum+=j;
                       }
                   }
                      for(int j=1;j<=i;j++){
                       if(j%2!=0){
                          sum+=j;
                       }
                   }
                   if(sum == y){found = 1;break;}
               }
               if(found == 1){
                  yes
               }
               else{
                  no
               }
           }
      }
   return 0;
}