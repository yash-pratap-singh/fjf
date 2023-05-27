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
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    for(int i=0;i<m.size();i++){
        cout<<m.size()<<" ";
    }
    if(m.size()<n){
        for(int i=m.size();i<n;i++){
            cout<<i+1<<" ";
        }
    }
    cout<<"\n";

   }
}