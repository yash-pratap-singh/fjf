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

void dfs(int i, unordered_map<int,int >&adj, vi &vis){
    if(vis[i]) return;
    vis[i]=1;
    
        if(!vis[adj[i]]){
            dfs(adj[i],adj,vis);
        }
    
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    int mod=1e9+7;
    while(t--){
        int n; cin>>n;
        vi a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        unordered_map<int,int>adj(n+1);
        for(int i=0;i<n;i++){
            adj[a[i]]=b[i];
        }
        vi vis(n+1,0),c(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
            if(c[i]) dfs(c[i],adj,vis);
        } 
        int ans=1;
        for(int i=0;i<n;i++){
            if(c[i]==0){
            if(a[i]==b[i]){
                continue;
            }
           else if(!vis[a[i]] and !vis[b[i]]){
            // cout<<a[i]<<" "<<b[i]<<" "<<ans<<"\n";
            ans=(ans*2)%mod;
            dfs(a[i],adj,vis);
            // dfs(b[i],adj,vis);
           }else if(!vis[a[i]]) dfs(a[i],adj,vis);
           else if(!vis[b[i]]) dfs(b[i],adj,vis);}
        }
        
        // cout<<ans%mod<<"\n";
        cout<<ans%mod<<"\n";
    }
}