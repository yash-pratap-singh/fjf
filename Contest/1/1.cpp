#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#define pb push_back
#define vi vector<int>
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

void dfs(vector<vector<int> > &adj, vi &vis, int i){
    if(vis[i]) return;
    vis[i]=1;

    for(auto it =adj[i].begin();it !=adj[i].end();it++){
        if(!vis[*it]) dfs(adj,vis,*it);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n + 1);
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vi vis(n + 1, 0);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
           cnt++;
           dfs(adj,vis,i);
        }
    }
    cout<<cnt<<"\n";
}