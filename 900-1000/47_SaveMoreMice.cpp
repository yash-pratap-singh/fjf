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
    ll n;
    int k; cin>>n>>k;
    ll a[k];
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    sort(a,a+k);
    ll pos=0;
    int cnt=0;
    for(int i=k-1;i>=0;i--){
       if(a[i]<=pos){
        break;
       }
       cnt++;
       pos+=(n-a[i]);
    }
    cout<<cnt<<"\n";
   }
}