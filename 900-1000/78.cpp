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

int dfs(unordered_map<int,list<int> >&adj, int i, int cnt, vi &dp, int &freq){
        freq+=1;
    if(adj[i].size()==0) return dp[i]=cnt;
    if(dp[i]!=-1) return dp[i];
    for(auto it:adj[i]){
        // cnt++;
        dp[i]=dfs(adj,it,cnt,dp,freq);
    }
    return dp[i]=cnt;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m; cin>>n>>m;
    unordered_map<int,list<int> >adj(n+1);
    for(int i=0;i<m;i++){
        int k; cin>>k;
        int x;
        if(k<=1) for(int i=0;i<k;i++) cin>>x;
        else{
            cin>>x; int y;
            for(int i=1;i<k;i++){
                cin>>y;
                adj[x].pb(y);
                adj[y].pb(x);
                x=y;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<i<<"->";
        for(auto it:adj[i]) cout<<it<<", "; cout<<"\n";
    }
    // return 0;
    vi dp(n+1,-1);
    map<int,int>m2;
    int cnt=0;
    for(int i=1;i<=n;i++){
        int freq=0;
        if(dp[i]!=-1) {dp[i]=dfs(adj,i,cnt,dp,freq); cnt++; m2[dp[i]]=freq; cout<<freq<<"\n";}
    }
    for(int i=1;i<=n;i++){
        cout<<dp[i]<<" ";
    }cout<<"\n";
}