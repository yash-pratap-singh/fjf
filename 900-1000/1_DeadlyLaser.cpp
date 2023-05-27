#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;



int main(){
   int t; cin>>t;
   while(t--){
    int n,m,s1,s2,d;
    cin>>n>>m>>s1>>s2>>d;
    int f=0;
    
    if((s1-d)<=1 and (s2-d)<=1) f=1;
    if((s1+d)>=n and (s2+d)>=m) f=1;

    if((s1-d)<=1 and (s1+d)>=n) f=1;
    if((s2-d)<=1 and (s2+d)>=m) f=1;

    if(f==1) cout<<"-1\n";
    else{
        cout<<(n-1)+(m-1)<<"\n";
    }
   }
}