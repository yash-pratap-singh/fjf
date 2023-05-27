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
   while(t--){
    int n; cin>>n;
    vi a(n); for(int i=0;i<n;i++) cin>>a[i];
    vi o,e, ans;
    int f=0;
    for(int i=0;i<n;i++){
        if(e.size()>=2 and o.size()>=1){
            ans.pb(e[0]);
            ans.pb(e[1]);
            ans.pb(o[0]); f=1;break;
        }
        if(o.size()>=3) {ans=o; f=1;break;}
        if(a[i]%2==0) e.pb(i+1);
        else o.pb(i+1);
    }
if(f==0){
if(e.size()>=2 and o.size()>=1){
            ans.pb(e[0]);
            ans.pb(e[1]);
            ans.pb(o[0]); 
        }
        if(o.size()>=3) {ans=o;}
}
    if(ans.size()==0) cout<<"NO\n";
    else {cout<<"YES\n";
    // sort(ans.begin(),ans.end());
    for(int i=0;i<3;i++) cout<<ans[i]<<" ";
    cout<<"\n";}
   }
}