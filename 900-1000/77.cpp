#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#include <unordered_map>
#include <list>
#define pb push_back
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
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

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int dfs(unordered_map<int, list<pair<int, int> > > &adj, vi &vis, int i, int &mini)
{
    if (vis[i])
        return -1;
            vis[i] = 1;
    if (adj[i].size() == 0)
        return i;

    for (auto it : adj[i])
    {
        mini=min(mini,it.second);
        if (adj[it.first].size() == 0)
            return it.first;
            return dfs(adj,vis,it.first,mini);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, p;
    cin >> n >> p;
    unordered_map<int, list<pair<int, int> > > adj(n + 1);
    vi inorder(n + 1, 0);
    vi outorder(n + 1, 0);
    for (int i = 0; i < p; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].pb(make_pair(b, c));
        inorder[b]++;
        outorder[a]++;
    }
    if(adj.size()==0){cout<<"0\n"; return 0;}
    
    vi vis(n + 1, 0);
    vector<pair<int, pair<int,int> > > ans;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] and inorder[i] == 0 and outorder[i]==1)
        {
            int mini=adj[i].front().second;
            int x = dfs(adj, vis, i, mini);
            int x2;
            
            if(x!=-1){
            ans.pb(make_pair(i, make_pair(x,mini)));
        }
    }
}
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++) cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<"\n";
}