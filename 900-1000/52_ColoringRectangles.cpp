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
    int n1=n;
    int m1=m;
    

    ll cnt1=0;
    while(n1%3!=0 and n1>0){
        n1-=2;
        cnt1++;
    }
    cnt1+=n1/3;
    cnt1*=m;
    ll cnt2=0;
    while(m1%3!=0 and m1>0){
        m1-=2;
        cnt2++;
    }
    cnt2+=m1/3;
    cnt2*=n;

    // cout<<cnt1<<" "<<cnt2<<"\n";
    cout<<min(cnt1,cnt2)<<"\n";

   }
}