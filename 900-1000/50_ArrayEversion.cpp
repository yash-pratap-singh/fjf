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
    ll ans=0;
    ll mini=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>mini){
            mini=a[i];
            ans++;
        }
    }
    cout<<ans<<"\n";
   }
}