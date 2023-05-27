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
    int n,m; cin>>n>>m;
    if(min(n,m)==1) cout<<"1 1\n";
    else if(min(n,m)==2){
        if(max(n,m)>3){
            cout<<"1 1\n";
        }else cout<<"2 2\n";
    }
    else if(min(n,m)==3){
        if(max(n,m)==3){
            cout<<"2 2\n";
        }else{
            cout<<"1 1\n";
        }
    }
    else  cout<<"1 1\n";
   }
}