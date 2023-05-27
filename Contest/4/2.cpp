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


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int t; cin>>t;
    ll m=1e9+7;
   while(t--){
    ll n; cin>>n;
    ll ans;
    ans=n*(n-1)%m;
    for(int i=1;i<=n;i++) ans=(ans*i)%m;
    cout<<ans<<"\n";
//    cout<<(1ll)*(fact(n)*2*n*(n-1)/2)<<"\n";
    
   }
}