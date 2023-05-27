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
        int n;
        ll k,b,s;
        cin>>n>>k>>b>>s;

        if(s<b*k or s>(b*k+(k-1) + (n-1)*(k-1))){
            cout<<"-1\n";
            continue;
        }
        s-=b*k;
        for(int i=0;i<n-1;i++){
            cout<<min(s,k-1)<<" ";
            s-=min(s,k-1);
        }
        cout<<b*k+s<<"\n";
    }
}