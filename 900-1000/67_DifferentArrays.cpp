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
#define vl vector<long long>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long> >
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
vvl dp(302, vl(180002,-1));
ll m=998244353;
vi a(302);

int solve(int s, int i, int n){
   
    if(i==n-1) return 1;
    if(dp[i][s+90000]!=-1) return dp[i][s+90000];
    if(s==0){
       return dp[i][s+90000]=solve(a[i+1], i+1,n);
    }
    else{
       return dp[i][s+90000]=(solve(a[i+1]+s, i+1,n) + solve(s-a[i+1],i+1,n))%m;
    }
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int n; cin>>n;
   for(int i=0;i<n;i++) cin>>a[i];
//    int ans=0;
   ll x=solve(a[1],1,n);
//    int x=(2*(n-2)+1-2*ans)%m;
   cout<<x<<"\n";
//    cout<<ans<<"\n";
}