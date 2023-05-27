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


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int t; cin>>t;
   while(t--){
    ll n,m,k; cin>>n>>m>>k;
    if(k==0 ){cout<<"NO\n"; continue;}
    if(m>((n*(n-1))/2)  or  (m<(n-1))) {cout<<"NO\n"; continue;}
    if(n==1){
        if(k-1>0) cout<<"YES\n";
        else cout<<"NO\n";
    }else if(n==2){
        if(k-1>1) cout<<"YES\n";
        else cout<<"NO\n";
    }else{
        if(m==(n*(n-1))/2) {
            if(k-1>1) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(k-1>2) cout<<"YES\n";
        else cout<<"NO\n";
    }
   }
}