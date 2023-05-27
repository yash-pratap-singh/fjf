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
    ll n; cin>>n;
    ll x1,x2;
    if((2*(n-4)-1)%3==0){
        x1=(2*(n-4) -1)/3;
    }else x1=(2*(n-4) -1)/3 +1;
    x2=(n-4)-x1;
    // cout<<x1<<" "<<x2<<"\n";
    cout<<x2-1<<"\n";
   }
}