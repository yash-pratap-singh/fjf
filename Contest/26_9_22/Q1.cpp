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
    int n,c; cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   map<int,int>m;
   ll cost=0;
   for(int i=0;i<n;i++) m[a[i]]++;
   for(auto it:m){
    if(it.second>c){
        cost+=c;
    }else{
        cost+=it.second;
    }
   }
   cout<<cost<<"\n";
   }
}