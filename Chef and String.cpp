#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	while(n--){
		string s;cin>>s;
		int c=0;
		for(int i=0;i<s.size()-1;){

		   if(s[i]!=s[i+1]){
		    c++;
		    i+=2;
           }
		   else i++;

	}
	cout<<c<<endl;
}

	return 0;
}
