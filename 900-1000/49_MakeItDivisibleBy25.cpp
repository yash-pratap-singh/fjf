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
    ll n; cin>>n;
    if(n%25==0){
        cout<<"0\n";
        continue;
    }
    map<int,int>m;
    string s=to_string(n);
    for(int i=0;i<s.length();i++){
        m[s[i]-'0']++;
    }
    int ans=INT_MAX;
    bool ok=false;
    if(m[7]>0 and m[5]>0){
        int cnt=0, idx;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='7' and cnt>0){
                idx=i;
                ok=true;
                break;
            }
            if(s[i]=='5') cnt++;
        }
        if(ok){
            idx=s.length()-1-idx-1;
            ans=min(ans,idx);
            ok=false;
        }
    }
    if(m[2]>0 and m[5]>0){
        int cnt=0, idx;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='2' and cnt>0){
                idx=i;
                ok=true;
                break;
            }
            if(s[i]=='5') cnt++;
        }
        if(ok){
            idx=s.length()-1-idx-1;
            ans=min(ans,idx);
            ok=false;
        }
    }
    if(m[5]>0 and m[0]>0){
        int cnt=0, idx;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='5' and cnt>0){
                idx=i;
                ok=true;
                break;
            }
            if(s[i]=='0') cnt++;
        }
        if(ok){
            idx=s.length()-1-idx-1;
            ans=min(ans,idx);
            ok=false;
        }
    }
    if(m[0]>=2){
        int cnt=0,idx;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0' and cnt>0){
                idx=i;
                ok=true;
                break;
            }
            if(s[i]=='0') cnt++;
        }
        if(ok){
            idx=s.length()-1-idx-1;
            ans=min(ans,idx);
            ok=false;
        }
    }
    cout<<ans<<"\n";
   }
}