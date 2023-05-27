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
    double a,b,c,d; cin>>a>>b>>c>>d;
    if(log10((double)(a/c)) +(b-d)==0){
      cout<<"=\n";
   }else if(log10((double)(a/c)) + (b-d)>0) cout<<">\n";
   else cout<<"<\n";
    }
}