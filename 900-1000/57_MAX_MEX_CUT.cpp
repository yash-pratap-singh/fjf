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
    string s1,s2;
    cin>>s1;
    cin>>s2;

    int sum=0;
   for(int i=0;i<n;i++){
    if(s1[i]==s2[i]){
        if(i+1<n and (s1[i+1]==s2[i+1] and s1[i+1]!=s1[i])) {sum+=2;i++;}
        else{
            if(s1[i]=='0') sum+=1;
        }
    }else{
        sum+=2;
    }
   }
    cout<<sum<<"\n";
   }
}