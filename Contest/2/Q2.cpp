#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#include<set>
#define pb push_back
#define vi vector<int>
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

bool isValid(int i, int j, int n,int m){
    if(i<0 or j<0 or i>=n or j>=m) return false; return true;
}

void dfs(int i, int j, int n, int m, vi &vis,vector<vector<int> >&g, int &ans, int prev ){
    if(isValid(i,j,n,m)){
        int x=abs(prev-g[i][j]);
        if(!vis[x]){
            ans+=1;
            vis[x]=1;
        }
        dfs(i,j+1,n,m,vis,g,ans,g[i][j]);
        dfs(i+1,j,n,m,vis,g,ans,g[i][j]);
        dfs(i+1,j+1,n,m,vis,g,ans,g[i][j]);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vi vis(2505,0);
    int x=1;
    vector<vector<int> >g(n, vi(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            g[i][j]=x;
            x++;
        }
    }
    int ans=0;
    dfs(0,0,n,n,vis,g, ans, 1);
    cout<<ans<<"\n";
   }
}