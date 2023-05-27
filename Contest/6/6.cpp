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

bool solve(unordered_map<int,list<int> >&adj, vi &vis, int i, vi &token, vi &bonus, vi &token2){
    if(i==1) return true;

    for(auto it:adj[i]){
        if(bonus[it]){
            // vis[it]=1;
           bool a=solve(adj,vis,it,token,bonus, token2);
           if(a) return true;
           bool b=false;
            for(auto it2:token){
                if(token2[it2]){
                    b=solve(adj,vis,it2, token,bonus,token2);
                    if(b) return true;
                }
            }
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int p,b; cin>>p>>b;
        vi token2(p,0);
        vi token(n,0);
        int x;
        for(int i=0;i<p;i++) {
            cin>>token2[i];
            token[token2[i]]=1;
        }
        sort(token2.begin(),token2.end());
        vi bonus(n,0);
        for(int i=0;i<b;i++){
            cin>>x; bonus[x]=1;
        }
        unordered_map<int,list<int> >adj(n+1);
        for(int i=0;i<m;i++){
            int a1,b1; cin>>a1>>b1;
            adj[a1].pb(b1); adj[b1].pb(a1);
        }
        vi vis(n+1,0);
        int f=0;
        if(token2[0]==1){cout<<"YES\n"; continue;}
        for(int i=0;i<token2.size();i++){
            for(auto it:adj[token2[i]]){
                if(bonus[it]){
                    cout<<solve(adj,vis,token2[i],token2,bonus,token); {f=1; break;}
                }
            }
            if(f) break;
            token[i]=0;
        }
    }
}