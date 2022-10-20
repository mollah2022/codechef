#include <iostream>
using namespace std;

int main() {
    int test; cin>>test;
    while(test--){
        int k; cin>>k;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='1') a++;
            else b++;
        }
        if(k%2==0)
        {
            if(a%2 && b%2){
                cout<<"NO"<<"\n";
            }
            else cout<<"YES"<<"\n";

        }
        else cout<<"YES"<<"\n";
    }
	return 0;
}
