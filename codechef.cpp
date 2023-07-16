#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int max_girls=0;
	    for(int i=0;i<n;i++){
	        int sum=0;
	        for(int j=i;j<i+k&&j<n;j++){
	            sum+=arr[j];
	           
	        }
	        max_girls=max(max_girls,sum);
	    }
	    cout<<max_girls<<endl;
	}
	return 0;
}