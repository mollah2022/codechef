#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,l;
        cin>>x>>y;
        k=(x*100);
        y=(y*10);
        if(k>=y)
        {
            cout<<"Cloth\n";
        }
        else
        {
            cout<<"Disposable\n";
        }
    }
    return 0;
}
