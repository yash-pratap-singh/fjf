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

int Mod=998244353;

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main(){
   int t; cin>>t;
   vector<ll>dp(63);
   for(int i=1;i<=62;i+=2){
      
   }
   while(t--){
    int n; cin>>n;
    int d=1;
    ll a=0,b=0;
    
   }
}