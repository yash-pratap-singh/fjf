#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#include<unordered_map>
#include<list>
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

int solve(vector<vector<int> > &adj, int m, int maxi, int mini, int &ans){
    if(m==1) return (maxi-mini);

    for(auto it:adj[m]){
        ans=min(ans,solve(adj,m-1,max(maxi,it),min(mini,it),ans));
    }
    return ans;
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int t; cin>>t;
   while(t--){
    int n,m; cin>>n>>m;
    vi a(n); for(int i=0;i<n;i++) cin>>a[i];
    if(m==1){cout<<"0\n"; continue;}
    sort(a.begin(),a.end());
    vector<vector<int> > adj(n);
    for(int i=0;i<n;i++){
        for(int j=2;j<=a[i]/2 and j<=m;j++){
            if(a[i]%j==0) adj[i].pb(j);
        }
        if(a[i]<=m) adj[i].pb(a[i]);
    }
    
    // for(int i=0;i<n;i++){cout<<i<<"-->";
    //     for(auto it:adj[i]) cout<<it<<", "; cout<<"\n";
    // }
    


    int ans=INT_MAX;
    
    for(int i=n-1;i>=0;i--){
        if(ans==0) break;
            vi vis(m+1,0);
            vis[1]=1;
            int maxi=INT_MIN, mini=INT_MAX;
            int cnt=1;
        for(int j=i;j>=0;j--){
            for(auto it:adj[j]){
                if(!vis[it]){
                    maxi=max(maxi,a[j]);
                    mini=min(mini,a[j]);
                    vis[it]=1;
                    cnt++;
                }
                if(cnt==m) break;
            }
                if(cnt==m) break;
        }
        if(cnt==m) ans=min(ans,(maxi-mini));
    }
    if(ans==INT_MAX) cout<<"-1\n";
    else cout<<ans<<"\n";
   }
}