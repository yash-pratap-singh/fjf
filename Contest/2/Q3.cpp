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


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n;
        ll m; cin>>n>>m;
        vi a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vi dp(n);
        for(int i=0;i<n;i++) dp[i]=i;
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]<=m){
                m-=(ll)a[i];
                cnt++;
            }else{
                dp[i]+=1;
            }
        }
        sort(dp.begin(),dp.end());
        int pos=1;
        for(int i=n-1;i>=0;i--){
            if(cnt>=dp[i]) break;
            pos++;
        }
        cout<<pos<<"\n";
    }
   
}