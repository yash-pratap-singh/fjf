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
        int n,m,d; cin>>n>>m>>d;
        vi p(n+1);
        for(int i=0;i<n;i++){
            int x; cin>>x;
            p[x]=i;
        }
        int ans=INT_MAX;
        vi a(m);
        int f=0;
        for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<m-1;i++){
            if(p[a[i]]>p[a[i+1]] or (p[a[i]]+d)<p[a[i+1]]) {f=1;  break;}
            else if(p[a[i]]<p[a[i+1]] and p[a[i+1]]<=(p[a[i]]+d)){
                
                int x=p[a[i+1]]-p[a[i]];
                int y=abs(p[a[i+1]]-p[a[i]]-d)+1;
                if((p[a[i]]-0)+(n-p[a[i+1]])<=y){ans=min(ans,x);}
                else{
                    ans=min(ans,min(x,y));
                }
                // cout<<x<<" "<<y<<"\n";
            }else if(p[a[i]]<p[a[i+1]]){
                int x=p[a[i+1]]-p[a[i]];
                ans=min(ans,x);
            }else if(p[a[i+1]]<=(p[a[i]]+d)){
                int y=abs(p[a[i+1]]-p[a[i]]-d)+1;
                 if((p[a[i]]-y)<0 or (p[a[i+1]]+y>n))
                 continue;
                 ans=min(ans,y);
            }
            // else {f++; break;}
        }
        // cout<<"F"<<f<<"\n";
        if(f) cout<<"0\n";
        else
        cout<<ans<<"\n";
        // else cout<<"0\n";
    }
}