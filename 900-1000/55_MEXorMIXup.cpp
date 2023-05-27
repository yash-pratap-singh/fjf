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

int computeXOR(int n)
{
   
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        ll Xor;
        Xor=computeXOR(a-1);
        // cout<<Xor<<"\n";
        // continue;
        ll req;
        req=Xor^b;

        if(Xor==b){
            cout<<a<<"\n";
        }else if(req==a){
            cout<<a+2<<"\n";
        }else{
            cout<<a+1<<"\n";
        }
    }
}