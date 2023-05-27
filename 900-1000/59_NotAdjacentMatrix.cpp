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

void solve(int n){
    if(n==1){
        cout<<"1\n";
        return;
    }
    if(n==2){
        cout<<"-1\n";
        return;
    }
    vector<vector<int> >v(n,vector<int>(n,0));

    int num=1;
    for(int gap=0;gap<n-1;gap++){
        for(int i=0,j=i+gap;j<n;j++,i++){
            v[i][j]=num;
            num++;
        }
    }
    for(int gap=1;gap<(n-1);gap++){
        for(int j=0,i=j+gap;i<n;i++,j++){
            v[i][j]=num;
            num++;
        }
    }
    v[0][n-1]=num;
    num++;
    v[n-1][0]=num;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
        cout<<"\n";
    }
}

int main(){
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    solve(n);
   }
}