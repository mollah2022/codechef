#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	 long long p1,p2,k;
	 cin>>p1;
	 cin>>p2;
	 cin>>k;
	 long long sum=p1+p2;
	 long long t=sum%(2*k);
	 if(t>=0 && t<k){
	     cout<<"CHEF"<<endl;
	 }
	 else{
	     cout<<"COOK"<<endl;
	 }
	}
	return 0;
}
