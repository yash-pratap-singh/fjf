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
        string s; cin>>s;
        string ans="";
       for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='0'){
            i--;
            int rem=s[i]-'0'-1;
            i--;
            int num=10*(s[i]-'0')+rem;
            ans=(char)('a'+(num))+ans;
            continue;
        }
        ans=(char)('a'+(s[i]-'0'-1))+ans;
       }
       cout<<ans<<"\n";
    }
}