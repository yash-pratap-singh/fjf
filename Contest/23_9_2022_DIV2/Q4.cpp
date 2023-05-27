#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

bool solve(int &st, vector<ll>a, int pos,vi &vis, int k){
    if(!vis[pos]){
        st+=a[pos];
         vis[pos]=1;
    }
    if((st>=0 and pos==0) or (st>=0 and pos==a.size()-1)){
        vis[pos]=0;
        return true;
    }
    if(st<0){ vis[pos]=0; return false;}
    if(!(solve(st,a,pos+1,vis,k) or solve(st,a,k-1,vis,k))){
        vis[pos]=0;
        return false;
    }
    vis[pos]=0;
    return true;
}

int main(){
   int t; cin>>t;
   while(t--){
    int n,k; cin>>n>>k;
    vi vis(n,0);
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int st=0;
    if(solve(st,a,k-1,vis,k-1)) cout<<"YES\n";
    else cout<<"NO\n";

   }
}