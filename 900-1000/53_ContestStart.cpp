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
    ll n,x,t; cin>>n>>x>>t;
    ll sum=0;
       ll person=t/x;
       if(person>=n){
        cout<<(n)*(n-1)/2<<"\n";
        continue;
       }
       sum=(n-person)*person+(person*(person-1)/2);
       cout<<sum<<"\n"; 
    // ll sum=0;
    // for(ll i=0;i<n;i++){
    //     sum+=min((n-1)*x,(x*i +t))/x -i;
    // }
    // cout<<sum<<"\n";
    
   }
}