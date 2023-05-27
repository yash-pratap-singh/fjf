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
    int n,r,b; cin>>n>>r>>b;
    int parts=b+1;
    while(n>0){
        for(int i=0;i<n/parts;i++){
            cout<<"R";
        }
        n-=n/parts;
        parts--;
        if(parts>0){
        cout<<"B";
        n--;
        }
    }
    cout<<"\n";
   }
}