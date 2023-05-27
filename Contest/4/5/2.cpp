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

unsigned long long fact(ll n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
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
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vl a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vl dp1(n,0), dp2(n,0); dp1[0]=a[0]; dp2[n-1]=a[n-1];
    for(int i=1;i<n;i++) dp1[i]=a[i]+dp1[i-1];
    for(int i=n-2;i>=0;i--) dp2[i]=a[i]+dp2[i+1];
    ll ans=1;
    for(int i=0;i<n-1;i++){
        ll x=gcd(dp1[i],dp2[i+1]);
        ans=max(ans,x);
    }
    cout<<ans<<"\n";
   }
}