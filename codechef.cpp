#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t,i,n,max,cur;
    
    
    cin>>t;
    
    
    while(t--){
        cin >> n;
        int arr[n];
        max=0;
        cur=1;
        
        
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        
        sort(arr,arr+n);
        
        
        for(i=1;i<n;i++){
            if(arr[i-1]==arr[i]) cur=cur+1;
            else cur=1;
            
            if(cur>max) max=cur;
        }
        
        
        cout << n-max  << endl;
        
        
    }
    
    return(0);
}