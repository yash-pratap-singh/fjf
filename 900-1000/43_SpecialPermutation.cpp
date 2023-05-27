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
    int n,a1,b; cin>>n>>a1>>b;
    vi a;
    a.pb(a1);
    int it1=n/2+1;
    int f=0;
    if(b>n/2+1 and b<=n) it1=n/2;
    for(int i=n;i>it1;i--){
        if(a1>=i){
            f=1;
            break;
        }
        if(i!=b)
        a.pb(i);
    }
    if(f==1) {
        cout<<"-1\n";
        continue;
    }
    int it2=n/2-1;
    if(a1>=1 and a1<=(n/2-1)) it2=n/2;
    for(int i=1;i<=it2;i++){
        if(b<=i){
            f=1;
        }
        if(i!=a1)
        a.pb(i);
    }
    if(f==1) {
        cout<<"-1\n";
        continue;
    }
    a.pb(b);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
   }
   
}