#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#include <unordered_map>
#include <list>
#include <set>
#define pb push_back
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long> >
#define ll long long
using namespace std;

int fact(int n)
{
    if (n == 0)
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

int solve(int i, int j, map<string, int> &m, string &t, int n)
{
    if (i + j >= n)
        return -1;
    string s = t.substr(i, j);
    if(i+j==n-1 and m.find(s)!=m.end()) return 1; 
    if (m.find(s) != m.end())
    {
        int x = solve(i + 1, 1, m, t, n);
        int y = solve(i + j, 1, m, t, n);
        if (x == -1 and y == -1)
            return -1;
        else if (x == -1)
            return y;
        else if(y==-1)
            return x;
        else return 1+ min(x,y);
    }else{
        return solve(i,j+1,m,t,n);
    }
}

bool solve(unordered_map<int, list<pair<int,int> > >&adj, int u, int x,int v, vvi &dp){
    if(dp[u][v]==1) return false;
    dp[u][v]=1;
    if(u==x) return true;
    for(auto it:adj[u]){
        if(it.second==v) if(solve(adj,it.first,x,it.second,dp)) return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m; cin>>n>>m;
    unordered_map<int, list<pair<int,int> > >adj(n+1);
    for(int i=0;i<m;i++){
        int a,b,c; cin>>a>>b>>c;
        adj[a].pb(make_pair(b,c));
        adj[b].pb(make_pair(a,c));
    }
    int q; cin>>q;
    for(int i=0;i<q;i++){
        vvi dp(n+1, vi(m+1,0));
        vector<bool> vis(m+1,false);
        int cnt=0;
        int u,v; cin>>u>>v; 
        for(auto it:adj[u]){
            if(it.first==v) { vis[it.second]=1;}
            else if(vis[it.second]!=1)
            vis[it.second]=solve(adj,it.first,v,it.second,dp);
        }
        for(int i=1;i<=m;i++) if(vis[i]==true) cnt++;
    cout<<cnt<<"\n";
    }
}