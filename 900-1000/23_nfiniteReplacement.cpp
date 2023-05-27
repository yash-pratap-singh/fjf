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
   int t1; cin>>t1;
   while(t1--){
    string s,t;
    cin>>s;
    cin>>t;

   if(t=="a"){
    cout<<"1\n";
   }else{
    ll ans;
    ans=(ll)(pow(2,s.length()));
    for(int i=0;i<t.length();i++){
        if(t[i]=='a'){
            ans=-1;
            break;
        }
    }
    cout<<ans<<"\n";
   }

   }
}