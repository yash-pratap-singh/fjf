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
    ll x;
    cin>>n>>x;
    ll maxV,minV;
    ll a; cin>>a;
    maxV=a+x;
    minV=a-x;
    int ans=0;
    for(int i=1;i<n;i++){
        cin>>a;
        if(a-x>maxV or a+x<minV){
            ans++;
            maxV=a+x;
            minV=a-x;
            continue;
        }
        if((a+x)<=maxV or (a-x)>=minV){
            maxV=min(maxV,a+x);
            minV=max(minV,a-x);
        }
    }
    cout<<ans<<"\n";
   }
}