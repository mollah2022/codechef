#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	 int X,Y,A,B,count=0;
	 cin>>X>>Y>>A>>B;

	 if(X==A)
	 {
	     count++;
	 }
	 if(X==B)
	 {
	     count++;
	 }
	   if(Y==A)
	   {
	       count++;
	   }
	   if(Y==B)
	   {
	       count++;
	   }
	   cout<<abs(count-2)<<endl;
	}
	return 0;
}

