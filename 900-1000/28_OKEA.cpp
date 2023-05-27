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
    int n,k; cin>>n>>k;
    if(k==1){
        if(n==1){
            cout<<"YES\n";
            cout<<"1\n";
        }else{
            cout<<"NO\n";
        }
        continue;
    }

    int temp[n][k];
    int cnt;
    for(int i=0;i<n;i++){
        cnt=k*i +1;
        for(int j=0;j<k;j++){
            temp[i][j]=cnt+j;
        }
    }

    if(k%2==0 and ){
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cout<<temp[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
   }
}