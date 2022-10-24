#include<iostream>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y && x>z)
        {
            cout<<"Setter\n";
        }
        else if(y>x && y>z)
        {
            cout<<"Tester\n";
        }
        else
        {
            cout<<"Editorialist\n";

        }
    }
    return 0;
}
