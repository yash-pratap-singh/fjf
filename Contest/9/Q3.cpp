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
        int n,w,h; cin>>n>>w>>h;
        vi a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int mini,maxi;
        if(a[0]>=b[0]){
            mini=(a[0]-w)-(b[0]-h); maxi=(a[0]+w)-(b[0]+h);
        }else{
            mini=(b[0]-h)-(a[0]-w); maxi=(b[0]+h)-(a[0]+w);
        }
        int f=0;
        if(a[0]>=b[0])
        for(int i=1;i<n;i++ ){
           int  mini2=(a[i]-w)-(b[i]-h); int maxi2=(a[i]+w)-(b[i]+h);
           if(mini2>maxi){f=1; break;}
           mini=max(mini,mini2);
           maxi=min(maxi,maxi2);
        }else{
            for(int i=1;i<n;i++ ){
           int  mini2=(b[i]-h)-(a[i]-w);int maxi2=(b[i]+h)-(a[i]+w);
           if(mini2>maxi){f=1; break;}
           mini=max(mini,mini2);
           maxi=min(maxi,maxi2);
        }
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }
}