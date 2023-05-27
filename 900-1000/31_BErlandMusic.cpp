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
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    string s; cin>>s;
    map<int,vector<int> >m;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            m[0].pb(p[i]);
        }else{
            m[1].pb(p[i]);
        }
    }

    
    int temp[n+1];
    sort(m[0].begin(),m[0].end());
    int num=1;
    for(auto it:m[0]){
        temp[it]=num;
        num++;
    }
    sort(m[1].begin(),m[1].end());
    for(auto it:m[1]){
        temp[it]=num;
        num++;
    }
    
   for(int i=0;i<n;i++){
    cout<<temp[p[i]]<<" ";
   }
   cout<<"\n";
   }
}