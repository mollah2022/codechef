#include<iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         int x,y,z,k=0;
         cin>>x>>y>>z;
         k=(x+y+z);
         if(x>=10 && y>=10 && z>=10 && k>=100)
         {
             cout<<"PASS\n";
         }
         else
         {
             cout<<"FAIL\n";
         }
     }
     return 0;
}
