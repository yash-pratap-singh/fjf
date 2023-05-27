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
   int x=log2(n-1);
   int y=pow(2,x);
   for(int i=n-1;i>=y;i--){
    cout<<i<<" ";
   }
   for(int i=0;i<y;i++) cout<<i<<" ";
   cout<<"\n";
    }
}