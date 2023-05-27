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
    int maxi=INT_MIN;
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        maxi=max(maxi,m[a[i]]);
    }
    if(maxi==n){
        cout<<"0\n";
    }else{
        int op=0;
        while(maxi<n){
            if(maxi*2>=n){
                op+=(n-maxi)+1;
                break;
            }
            op++;
            op+=maxi;
            maxi=maxi*2;
        }
        cout<<op<<"\n";
    }
   
   }
}