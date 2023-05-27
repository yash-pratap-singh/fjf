#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<list>
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

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vi a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> dp(n,0),dp1(n,0); if(a[0]==2) dp[0]=1; if(a[n-1]==2) dp1[n-1]=1;
        for(int i=1;i<n;i++){
            if(a[i]==2) dp[i]=dp[i-1]+1;
            else dp[i]=dp[i-1];
        }
        for(int i=n-2;i>=0;i--) {
            if(a[i]==2) dp1[i]=dp1[i+1]+1;
            else dp1[i]=dp1[i+1];
        }
        int ans=-1;
        // for(int i=0;i<n;i++) cout<<dp[i]<<" "<<dp1[i]<<"\n"; return 0;
        for(int i=0;i<n-1;i++){
            if(dp[i]==dp1[i+1]) {ans=i+1; break;}
        }
        cout<<ans<<"\n";
    }
}