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
// int ans2=0;

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

int dfs(unordered_map<int,list<pair<int,int> > >&adj, vi &vis ,int i, int &ans3){
    if(vis[i]) return 0;
    int ans=0;
    vis[i]=1;
    for(auto it:adj[i]){
        int y=dfs(adj,vis,it.first,ans3);
        ans=max(ans,y);
    }
    // cout<<ans<<" "<<ans2<<"\n";
    return ans3+=adj[0].front().second;
    return adj[0].front().second;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    unordered_map<int,list<pair<int,int> > >adj(n);
    vi vis(n,0);
    vis[0]=1;
    for(int i=0;i<n-1;i++){
        int u,v,c; cin>>u>>v>>c;
        adj[u].pb(make_pair(v,c));
        for(auto it:adj[0]){
            int x=dfs(adj,vis,it.first,0);
            ans2=max(ans2,x);
        }
    }
        cout<<ans2<<"\n";
}