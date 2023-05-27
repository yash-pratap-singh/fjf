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
    string s,t;
    cin>>s>>t;
    map<int,vector<int> >m;
    for(int i=0;i<s.length();i++){
        m[s[i]-'A'].pb(i);
    }
    map<int,int>m2;
    for(int i=0;i<t.length();i++){
        m2[t[i]-'A']++;
    }
    string ans="YES";
    int prev=-1,prev2;
    for(int i=0;i<t.length();i++){
        if(m.find(t[i]-'A')==m.end()){
            ans="NO";
            break;
        }
        int sz;
        sz=m[t[i]-'A'].size();
        int sz2=m2[t[i]-'A'];
        m2[t[i]-'A']--;
        prev2=m[t[i]-'A'][sz-sz2];
        // cout<<t[i]<<" "<<prev2<<"\n";
        if(prev2<=prev){
            ans="NO";
            break;
        }
    prev=prev2;

    }
    cout<<ans<<"\n";
   }
}