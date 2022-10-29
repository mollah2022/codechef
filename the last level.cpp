#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int c;
	    int sum =0;
	    if (x<=3){
	        c=x*y;
	        cout<<c<<endl;
	    }
	    else{
	        if(x%3 != 0){
	        c=x*y+((x/3)*z);
	        cout<<c<<"\n";
	        }
	        if(x%3 == 0){
	            c=x*y+(((x/3)-1)*z);
	            cout<<c<<"\n";
	        }
	    }
	}

	return 0;
}

