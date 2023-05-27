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
    string s="ksaerf";
    s=s.substr(0,5);
    cout<<s<<"\n";
    return 0;
   int t; cin>>t;
   while(t--){
    string s; cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='a' and s[i+1]=='b'){
            a++;
        }else if(s[i]=='b' and s[i+1]=='a'){
            b++;
        }
    }
    if(a==b){
        cout<<s<<"\n";
    }else if(a<b){
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='b'){
                s[i]='a';
                break;
            }
        }
        cout<<s<<"\n";
    }else if(a>b){
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='a'){
                s[i]='b';
                break;
            }
        }
        cout<<s<<"\n";
    }
   }
}