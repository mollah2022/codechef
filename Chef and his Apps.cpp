#include <iostream>
using namespace std;

int main() {
	int t,s,x,y,z,sum,sub1,sub2;
	cin>>t;
	while(t){
	    cin>>s;
	    cin>>x;
	    cin>>y;
	    cin>>z;
	    sum=x+y+z;
	    sub1=s-x;
	    sub2=s-y;
        if(s>=sum){
            cout<<0<<endl;
        }
        else if(sub1>=z ||sub2>=z){
            cout<<1<<endl;
        }
        else if(sum>s){
            cout<<2<<endl;
        }
	    t--;
	}
	return 0;
}
