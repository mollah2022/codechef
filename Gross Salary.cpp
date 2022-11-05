#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x;
        cin>>x;
        int y=0;
        y=((x*90)/100)+((x*10)/100)+x;
        cout<<y<<endl;
        y=0;
    }
    return 0;
}

