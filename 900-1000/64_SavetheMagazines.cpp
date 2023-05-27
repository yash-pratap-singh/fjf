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

int solve(vi &a, string &s, vi &dp, bool carry, int i){
   if(i==0){
    if(s[i]=='1' or carry==true) return dp[i]=a[i];
    return dp[i]=0;
   }
   if(s[i]=='1'){
    if(carry==true){
        return dp[i]=a[i]+solve(a,s,dp,true,i-1);
    }
    return dp[i]=max(a[i],solve(a,s,dp,true,i-1));
   }
   if(s[i]=='0'){
    if(carry==true){
        return dp[i]=a[i]+solve(a,s,dp,false,i-1);
    }
   }
   return dp[i]=0;
}

int solve(vi &a, char prev, int i, vi &dp , string &s){
    if(i==a.size()) return 0;

    if(s[i]=='0') dp[i]=dp[i-1];
    else if(s[i]=='1' and prev=='0'){
        dp[i]=dp[i-1]+max(a[i]+solve(a,'1',i+1,dp,s),a[i-1]+solve(a,'0',i+1,dp,s));
    }else{
        dp[i]=dp[i-1]+a[i];
    }
    return dp[i];
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    string s; cin>>s;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];



    // BINARY SEARCH APPROACH
    // int prev=0;
    // ll sum=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='0'){
    //         prev=a[i];
    //         continue;
    //     }
    //    if(s[i]=='1'){
    //     if(prev>a[i]){
    //         sum+=prev;
    //         prev=a[i];
    //     }else sum+=a[i];
    //    }
    // }
    // cout<<sum<<"\n";


    // DP - TOP-DOWN APPROACH
    vi dp(n,0);
    dp[0]=a[0];
    cout<<solve(a,s[0],1,dp,s)<<"\n";

   }
}