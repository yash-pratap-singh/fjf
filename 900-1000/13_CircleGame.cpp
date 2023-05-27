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
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2==1){
            cout<<"Mike\n";
        }else{
            ll mini=INT_MAX,idx=0;
            for(int i=0;i<n;i++){
                if(a[i]<mini){
                    mini=a[i];
                    idx=i;
                }
            }
            if(idx%2==0){
                cout<<"Joe\n";
            }else{
                cout<<"Mike\n";
            }
        }
    }
}