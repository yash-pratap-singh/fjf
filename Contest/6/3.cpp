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


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi ans(n+1);
        map<int,vi> v;
        for(int i=0;i<n;i++){
            int x;
            for(int i=0;i<n-1;i++){
                cin>>x;
                v[x].pb(i);
            }
        }
        for(int i=1;i<=n;i++){
            sort(v[i].begin(),v[i].end(),greater<int>());
        }
    
        for(int i=1;i<=n;i++){
            int idx=v[i][0];
            if(idx==(n-2)){
                int mini=idx;
                for(auto it:v[i]){
                    mini=min(mini,it);
                }
                if(mini==idx) ans[n-1]=i;
                else
                ans[idx]=i;
            }
            else ans[idx]=i;
            // cout<<idx<<" "<<i<<"\n";
        } 
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
}