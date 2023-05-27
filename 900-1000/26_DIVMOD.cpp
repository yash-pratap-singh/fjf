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
    ll l,r,a;
    cin>>l>>r>>a;
    ll ans1;
    ans1=(r/a)+(r%a);
    if(r%a==a-1){
        ans1=max(ans1,(r/a)+(r%a));
    }
    else if(r%a<a-1){
        if(r-(r%a)-1>=l){
            ans1=max(ans1,((r-(r%a)-1)/a) + a-1);
        }
    }
    cout<<ans1<<"\n";
   }
}