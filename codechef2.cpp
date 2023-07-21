#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
       string s; cin >> s;
       int can = 0;
       for(int i = 0; i < n; ++i){
           int num = s[i] - '0';
           if( (num == 0) || (num == 5) ){
               can = 1;
               break;
           }
       }
       if(can==1)
       {
           cout<<"Yes"<<'\n';
       }
       else
       {
           cout<<"No"<<'\n';
       }

    }


}