#include<iostream>
#include<vector>
using namespace std;

int main(){
   int n,k; cin>>n>>k;
   int ans=0;
    int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    (a[i]>=a[k-1] and a[i]>0)?ans++:1;
   }
   cout<<ans<<"\n";
}