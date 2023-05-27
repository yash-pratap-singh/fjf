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
    int n,a,b; cin>>n>>a>>b;
    string s; cin>>s;
    int cnt=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            cnt++;
        }
    }
    cnt++;
    cout<<(a*n)+max(b*n,(cnt/2 +1)*b)<<"\n";

    
   }
}