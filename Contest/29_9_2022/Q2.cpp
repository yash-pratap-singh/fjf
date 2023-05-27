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
    int n; cin>>n;
    vi d(n);
    for(int i=0;i<n;i++) cin>>d[i];
    vi a(n);
    a[0]=d[0];
    bool f=false;
    for(int i=1;i<n;i++){
        if(d[i]==0){
            a[i]=a[i-1];
        }
        else if(d[i]<=a[i-1]){
            f=true;
            break;
        }
        else{
            a[i]=d[i]+a[i-1];
        }
    }
    if(f){
        cout<<"-1\n";
    }else{
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
   }
}