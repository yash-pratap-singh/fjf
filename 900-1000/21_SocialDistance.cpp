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


int main(){
   int t; cin>>t;
   while(t--){
    int n;
    ll m;
    cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n>m){
        cout<<"NO\n";
        continue;
    }    
    sort(a,a+n);
    ll chairsReq=0;
    for(int i=0;i<n-1;i++){
        chairsReq+=max(a[i],a[i+1]);
    }
    chairsReq+=max(a[n-1],a[0]) + n;
    if(chairsReq>m) cout<<"NO\n";
    else cout<<"YES\n";

   }
}