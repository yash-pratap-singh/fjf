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
        bool nonZero=false;
        ll a,op=0;
        for(int i=0;i<n-1;i++){
            cin>>a;
            if(a==0 and nonZero==true){
                op+=1;
                continue;
            }
            op+=a;
            nonZero=nonZero or a;
        }
        cin>>a;
        cout<<op<<"\n";
    }
}