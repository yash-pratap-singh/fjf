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
    int a[n];
    int mini=INT_MAX, maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i<n-1)
        mini=min(mini,a[i]);
        if(i>0)
        maxi=max(maxi,a[i]);
    }
    if(n==1){
        cout<<"0\n";
        continue;
    }
    int ans=INT_MIN;
    for(int i=0;i<n-1;i++){
        ans=max(ans,a[i]-a[i+1]);
    }
    ans=max(ans,a[n-1]-mini);
    ans=max(ans,maxi-a[0]);
    cout<<ans<<"\n";
   }
}