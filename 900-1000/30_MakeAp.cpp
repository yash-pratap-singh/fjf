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
    ll a,b,c; cin>>a>>b>>c;
    if((b-a)==(c-b)){
        cout<<"YES\n";
    }else{
        if(((2*b-c)%a==0 and (2*b-c)>0) or ((2*b-a)%c==0 and (2*b-a)>0) or ((a+c)%(2*b)==0 and (a+c>0))){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
 }  
}