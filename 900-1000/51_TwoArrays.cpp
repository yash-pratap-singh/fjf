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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int f=0;
    for(int i=n-1;i>=0;i--){
        if((b[i]-a[i])>1 or (b[i]-a[i])<0){
            f=1;
            break;
        }
    }
    if(f==1) cout<<"NO\n";
    else cout<<"YES\n";
   }
}