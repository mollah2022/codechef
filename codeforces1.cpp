#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    set <char> a1;
    getline(cin,s1);
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
            a1.insert(s1[i]);
    }
    cout<<a1.size()<<endl;
    return 0;
}