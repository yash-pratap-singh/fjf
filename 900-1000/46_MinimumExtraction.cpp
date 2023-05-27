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
    ll mini=INT_MIN;
    ll sum=0;
    for(int i=0;i<n;i++){
        a[i]=a[i]-sum;
        mini=max(mini,a[i]);
        sum+=a[i];
    }
    cout<<mini<<"\n";
   }
}