#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
     int A, B, C;
      cin>>A>>B>>C;
    if(B>A && B<C || B>C && B<A)
    cout<<B<<endl;
    else if(C>A && C<B || C>B && C<A)
    cout<<C<<endl;
    else
    cout<<A<<endl;
	}
	return 0;
}
