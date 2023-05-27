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
    if(abs(a-1)==(abs(b-c)+abs(c-1))){
        cout<<"3\n";
    }else if(abs(a-1)<(abs(b-c)+abs(c-1))){
        cout<<"1\n";
    }else{
        cout<<"2\n";
    }
   }
}