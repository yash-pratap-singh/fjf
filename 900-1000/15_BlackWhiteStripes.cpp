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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int cnt=0,mini=INT_MAX;
    for(int i=0;i<k;i++){
        if(s[i]=='W'){
            cnt++;
        }
    }
    mini=min(mini,cnt);
    for(int i=k;i<n;i++){
        if(s[i]=='W' and s[i-k]=='B'){
            cnt++;
            mini=min(cnt,mini);
        }else if(s[i]=='B' and s[i-k]=='W'){
            cnt--;
            mini=min(mini,cnt);
        }
    }
    cout<<mini<<"\n";

   }
}