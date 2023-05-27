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
    ll n; cin>>n;
    if(n%2!=0 or n==2){
        cout<<"-1\n";
    }else{
        n/=2;
        if(n%3==0){
            cout<<n/3<<" ";
        }else if(n%3==1){
            cout<<n/3+1<<" ";
        }else{
            cout<<n/3+1<<" ";
        }
        cout<<n/2<<"\n";
    }
   }
}