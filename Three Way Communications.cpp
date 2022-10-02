#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r;
	    cin>>r;
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    float x=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
	    float y=sqrt(((c-e)*(c-e))+((d-f)*(d-f)));
	    float z=sqrt(((a-e)*(a-e))+((b-f)*(b-f)));

	    if(x<=r && y<=r){
	        cout<<"yes"<<endl;
	    }
	    else if(z<=r){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }

	}
	return 0;
}
