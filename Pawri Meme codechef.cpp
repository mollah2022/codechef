#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;


	while(n--)
	{
	    string s;
	    cin>>s;

	    int l;
	    for(l=0; s[l]!='\0'; l++);


	    if(l>=5)
	    {
	        for(int i=0; i<l-4; i++)
	        {
	            if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y')
	            {
	                s[i+2]='w';
	                s[i+3]='r';
	                s[i+4]='i';
	            }

	        }
	    }



	    cout<<s<<endl;
	}



	return 0;
}
