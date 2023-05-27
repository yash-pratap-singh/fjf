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
        vi a(n); for(int i=0;i<n;i++) cin>>a[i];
        vi dp(n,0);
        dp[0]=a[0]-1;
        int st=1;
        vi vis(n+1,0);
        vis[a[0]]=1;
        int maxi=a[0], maxidp=dp[0];
        if(a[0]==1) st=2;
        for(int i=1;i<n;i++){
            if(!vis[a[i]]){
                vis[a[i]]=1;
                
                if(a[i]<maxi){
                    if(a[i]!=st){
                        dp[i]=maxidp;
                    }
                }

            }
        }
    }
}