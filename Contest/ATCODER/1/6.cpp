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

bool solve(unordered_map<int,list<int> >&adj, int a,int b, vi &vis, int &ans){
    vis[a]=1;
    
    if(a==b) return true;

    for(auto it:adj[a]){
        if(!vis[it]){
            if(solve(adj,it,b,vis,ans)){
                ans=max(ans,max(it,a));
                return true;
            }
        }
    } return false;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m; cin>>n>>m;
    unordered_map<int,list<int> >adj(n+1);
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].pb(y);
    }
    int q; cin>>q;
    int a,b;
    while(q--){
        cin>>a>>b;
        vi vis(n+1,0); int ans=-1;
        if(adj[a].size()==0){ cout<<"-1\n"; continue;}
        if(solve(adj,a,b,vis,ans)) cout<<ans<<"\n"; else cout<<"-1\n";
    }
}