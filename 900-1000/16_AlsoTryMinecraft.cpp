#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;


int main(){
    int n,m; cin>>n>>m;
   ll a[n+1];
   for(int i=1;i<=n;i++) cin>>a[i];
   ll dp[n+1];
   dp[1]=0;
   for(int i=2;i<=n;i++){
      if(a[i]<a[i-1]){
         dp[i]=dp[i-1]+(a[i-1]-a[i]);
      }else{
         dp[i]=dp[i-1];
      }
   }
   ll dp2[n+1];
   dp2[n]=0;
   for(int i=n-1;i>=1;i--){
      if(a[i]<a[i+1]){
         dp2[i]=dp2[i+1]+(a[i+1]-a[i]);
      }else dp2[i]=dp2[i+1];
   }
   int x,y;
   for(int i=0;i<m;i++){
      cin>>x>>y;
      if(x>y){
         cout<<dp2[y]-dp2[x]<<"\n";
      }else{
         cout<<dp[y]-dp[x]<<"\n";
      }
   }
}