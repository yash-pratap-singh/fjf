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
         int i=0;
         while(i+1<n and a[i]<=a[i+1]){
            i++;
         }
         while(i+1<n and a[i]>=a[i+1]) i++;

         if(i+1==n) cout<<"YES\n";
         else cout<<"NO\n";
    }
}