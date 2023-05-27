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
    int n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll ans=INT_MAX;
    for(int i=1;i<n-1;i++){
        ans=min(ans,(a[i+1]-a[i-1]));
    }
    cout<<ans<<"\n";
   }
}