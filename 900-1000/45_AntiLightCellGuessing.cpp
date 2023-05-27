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
    ll n,m; cin>>n>>m;
    if(n==1 and m==1){
        cout<<"0\n";
        continue;
    }
    if(min(n,m)>=2){
        cout<<"2\n";
    }else{
        cout<<"1\n";
    }
   }
}