#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#include<set>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int solve(int n, vi &a, vi &dp){
    if(n<a[0]) return dp[n]=-1;
    if(dp[n]!=INT_MIN) return dp[n];

    for(int i=0;i<3;i++){
        if(n%a[i]==0) dp[n]=max(dp[n],n/a[i]);
        else{
            if(n-a[i]<a[i]) continue;
         dp[n]=max(dp[n],1+solve(n-a[i],a,dp));
        }    
    }
    return dp[n];
}


int main(){
    // ios::sync_with_stdio(0);cin.tie(0);

    int n; 
    vi a(3);
    cin>>n>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    vi dp(n+1, INT_MIN);
    int x=solve(n,a,dp);
    // for(int i=0;i<n;i++) cout<<dp[i]<<" ";
    cout<<x<<"\n";
}