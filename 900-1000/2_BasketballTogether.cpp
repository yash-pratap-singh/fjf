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
   int n,d;
   cin>>n>>d;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   int wins=0,players=0;
   for(int i=n-1;i>=0;i--){
    if(n-players>=(d/a[i])+1){
        players+=d/a[i] +1;
        wins++;
    }else break;
   }
   cout<<wins<<"\n";
}