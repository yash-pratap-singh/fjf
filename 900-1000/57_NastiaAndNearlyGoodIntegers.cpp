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
    ll a,b;
     cin>>a>>b;
     
     if(b==1){
        cout<<"NO\n";
        continue;
     }
     ll x,y,z;
    if(b==2){
        cout<<"YES\n";
        x=a;
       y=a*(2*b-1);
       z=2*a*b;
     }else if(b>2){
        cout<<"YES\n";
        x=a;
        z=a*b;
        y=a*(b-1);
     }
     cout<<x<<" "<<y<<" "<<z<<"\n";
   }
}