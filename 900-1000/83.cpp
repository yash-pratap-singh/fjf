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
        int m; cin>>m;
        vi w(m,0), i1(m,0),n(m,0);
        for(int i2=0;i2<m;i2++){
            string s; cin>>s;
            for(int i=0;i<3;i++){
                if(s[i]=='w') w[i]++;
                else if(s[i]=='i') i1[i]++;
                else n[i]++;
            }
        }
        ll ans=0;
            sort(w.begin(),w.end());
            sort(i1.begin(),i1.end());
            sort(n.begin(),n.end());
            for(int i=0;i<m;i++){
                if(w[i]==0) ans++;
                if(i1[i]==0) ans++;
                if(n[i]==0) ans++;
            }
            cout<<ans<<"\n";
    }
}