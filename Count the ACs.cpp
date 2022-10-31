#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k = n/100;
	    int a = n%100;
	    if((k+a)>10){
	        cout<<"-1"<<endl;
	    }
	    else{
	    cout<<(k+a)<<endl;
	}
	}
	return 0;
}
