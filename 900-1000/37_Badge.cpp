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

int dfs(int n, vi a, vi &vis, vi &dp){
    if(vis[n]==1 ){
        return n;
    }else{
        if(dp[n]!=-1) return dp[n];
        else{
        vis[n]=1;
        return dp[n]=dfs(a[n],a,vis,dp);
        }
    }
}

int main(){
   int n; cin>>n;
   vi a(n+1);
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   int ans;
   vi dp(n+1,-1);
   for(int i=1;i<=n;i++){
    if(dp[i]!=-1){
        cout<<dp[i]<<" ";
    }else{
    vi vis(n+1,0);
    cout<<dfs(i,a,vis,dp)<<" ";
    }
   }
}