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
    string s;
     cin>>s;
     string t;
     t=s;
     sort(t.begin(),t.end());
     if(s==t){
        cout<<s<<"\n";
        continue;
     }
     vector<vi>v(10);
     for(int i=0;i<s.length();i++){
       v[s[i]-'0'].pb(i);
     }
     int maxi=INT_MIN,idx;
     string ans="";
     for(int i=0;i<s.length();i++){
        if(s[i]==t[i]){
            ans+=s[i];
        }
        else{
            idx=t[i]-'0';
            break;
        }
     }
    // cout<<ans<<"\n";
     maxi=v[idx][v[idx].size()-1];
     for(int i=0;i<v[idx].size();i++){
        ans+=to_string(idx);
        // cout<<ans<<", ";
     }
     
     for(int i=idx+1;i<=9;i++){
        if(v[i].size()!=0){
            for(int j=v[i].size()-1;j>=0;j--){
                if(v[i][j]>maxi){
                    maxi=v[i][j];
                    ans+=to_string(i);
                }else{
                    ans+=to_string(min(i+1,9));
                }
            }
        }
     }
     cout<<ans<<"\n";
   }
}