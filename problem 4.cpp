#include<iostream>
using namespace std;

  template <typename t1>
  void max_4(t1 arr[],int n){
   int sum=0;
   for(int i=0;i<n;i++){
    sum=sum+arr[i];
    }
    cout<<sum<<endl;
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
    cin>>arr[j];
    }
   max_4(arr,n);

    return 0;
}
