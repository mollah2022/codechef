#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z,m,tot;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        cin>>tot;

        cin>>x>>y>>z>>m;

        int max1 = max(x,y);
        int max2 = max(z,m);
        int maxi = max(max1,max2);

        cout<<maxi<<endl;

    }
}

