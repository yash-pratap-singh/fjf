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
   ll n,m; cin>>n>>m;
   int mini,maxi;
   if(m<=n){
     mini=n-2*m; mini=max(mini,0);
   }else{
    mini=0, maxi=0;
   }
    ll cnt=0;
    for(int i=1;i<=n;i++){
        if(cnt>=m){maxi=n-i+1; break;}
        cnt+=i-1;
    }
   cout<<mini<<" "<<maxi<<"\n";
}