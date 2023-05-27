#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    int f=0;
    while(t--){
        long long n; cin>>n;
        if(n==1){
            cout<<"NO\n";
            continue;
        }
        
       if(n%2==1 and n>1){
        cout<<"YES\n";
        continue;
       }
       while(n%2==0){
        n/=2;
       }
       if(n%2==1 and n>1){
        cout<<"YES\n";
       }else{
        cout<<"NO\n";
       }
    }
}