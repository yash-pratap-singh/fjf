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
    double n; cin>>n;
    if(n==1){cout<<"NO\n"; continue;}
    if(ceil(double(log2(n)))==floor((double)(log2(n)))){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
 }  
}