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
        string s; cin>>s;
        int p; cin>>p;
        int sum=0;
        map<int,int>m;
        for(int i=0;i<s.length();i++){
            sum+=s[i]-'a'+1;
        }
        if(sum<=p){
            cout<<s<<"\n";
            continue;
        }
       int mp[26]={0};
       string temp=s;
       sort(s.begin(),s.end());
       for(int i=s.length()-1;i>=0;i--){
            if(sum<=p) break;
            mp[s[i]-'a']++;
            sum-=s[i]-'a'+1;
       }
       for(int i=0;i<temp.length();i++){
        if(mp[temp[i]-'a']==0){
            cout<<temp[i];
        }
        else{
            mp[temp[i]-'a']--;
        }
       }
       cout<<"\n";
    }
}