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
        string s; cin>>s;
        vi vis(26,0);
        if(n==0) {cout<<"0\n"; continue;}
        vi dp(n,0), dp2(n,0);
        dp[0]=1; vis[s[0]-'a']=1;
        for(int i=1;i<n;i++){
            if(vis[s[i]-'a']){
                dp[i]=dp[i-1];
            }else {dp[i]=dp[i-1]+1; vis[s[i]-'a']=1;}
        }
        dp2[n-1]=1;
        for(int i=0;i<26;i++){
            vis[i]=0;
        }
        vis[s[n-1]-'a']=1;
        for(int i=n-2;i>=0;i--){
            if(vis[s[i]-'a']){
                dp2[i]=dp2[i+1];
            }else{
                dp2[i]=1+dp2[i+1];
                vis[s[i]-'a']=1;
            }
        }
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,(dp[i]+dp2[i+1]));
        }
        // for(int i=0;i<n;i++) cout<<dp[i]<<" "<<dp2[i]<<"\n";
        cout<<maxi<<"\n";
    }
}