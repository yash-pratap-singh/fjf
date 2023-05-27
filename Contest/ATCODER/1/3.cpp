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

bool cycle(unordered_map<int,list<int > >&adj, vi &vis, int i, int par){
    vis[i]=1;
    for(auto it:adj[i]){
        if(!vis[it]){
            if(cycle(adj,vis,it,i)) return true;
        }else if(par!=it){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m; cin>>n>>m;
    unordered_map<int,list<int > >adj(n+1);
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vi vis(n+1,0);
    if(cycle(adj,vis,1,-1)) {cout<<"No\n";}
    else {
        for(int i=1;i<=n;i++){
            if(vis[i]==0) {cout<<"No\n"; return 0;}
        }
        cout<<"Yes\n"; 
    }
}