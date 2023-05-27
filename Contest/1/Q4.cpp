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


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi p(n+1,0), vis(n+1,0), cycle(n+1,0);

        for(int i=1;i<=n;i++) cin>>p[i];
        int c=0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                c++;
                int curr=i;
                while(1){
                    if(vis[curr]) break;
                    vis[curr]=1;
                    cycle[curr]=c;
                    curr=p[curr];
                }
            }
        }
        int ans=n-c+1;
        for(int i=2;i<=n;i++){
            if(cycle[i]==cycle[i-1]){
                ans-=2;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}