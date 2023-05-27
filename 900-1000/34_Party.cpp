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
   int n; cin>>n;
   int x;
   int a[n+1];
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   int ans=0;
    int cnt,k;
   for(int i=1;i<=n;i++){
    cnt=1;
    k=a[i];
    while(k!=-1){
        cnt++;
        k=a[k];
    }
    ans=max(ans,cnt);
   }
   cout<<ans<<'\n';
}