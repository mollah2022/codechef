#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, y;
	    cin>>n;
	    cin>>y;
	    int a;
	    int arrr[n];
	    for(int i=0; i<n; i++){
	        cin>>arrr[i];
	    }
	    a=0;
	    for(int i=0; i<n; i++){
	        a=a|arrr[i];
	    }
	    int x=y-a;
	    if((x&y)==x){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	
	return 0;
}