#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<unordered_map>
#include<list>
#include<stack>
#include<set>
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

bool isCycle(unordered_map<int,list<int> > &adj, vi &vis, int i, int par){
    vis[i]=1;
    for(auto it:adj[i]){
        if(!vis[it]) {if(isCycle(adj,vis,it,i)) return true;}
        else if(it!=par) return true;
    }
    return false;
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int m; cin>>m;
   unordered_map<int,list<int> > adj;
   for(int i=0;i<m;i++){
    int x,y; cin>>x>>y;
    adj[x].pb(y); adj[y].pb(x);
   }
   int f=0;
    for(auto it:adj){
        if(adj[it.first].size()>=3) {f=1; break;}
    }
    if(f) cout<<"WIN\n"; else cout<<"FAIL\n";
}