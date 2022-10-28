#include <iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
	   int t;
    cin>>t;
    while(t--)
    {
        long  a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
    }

	return 0;
}

