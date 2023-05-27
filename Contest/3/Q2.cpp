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
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll i=0,j=0, cnt=0;
    while(i<n and j<=n){
        if(a[i]<=j){
            // cout<<i<<"->";
            cnt++;
            while(a[i]<=j){
                i++;
                j++;
            }
            continue;
        // cout<<i<<"\n";
        }
        j++;
    }
    if(a[0]>0) cnt++;
    cout<<cnt<<"\n";
   }
}