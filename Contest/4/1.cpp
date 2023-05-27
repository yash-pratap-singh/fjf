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

int countSetBits(ll n)
{
     int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
//    vi dp(1e9+2,-1);
//    dp[1]=1; dp[2]=1;
//    for(ll i=3;i<1e9+2;i++){
    // dp[i]=countSetBits(i,dp);
//    }
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vl a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // for(int i=0;i<n;i++) a[i]=countSetBits(a[i]);
    int cnt=0;
    for(int i=1;i<n;i++){
        if(a[i]%2==a[i-1]%2) cnt++;
    }
    cout<<cnt<<"\n";
   }
}