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
   int t;
    cin>>t;
    while(t--){
        ll a,b,c,d; cin>>a>>b>>c>>d;
        ll n1=a*d, n2=c*b;

        if(n1==n2){
            cout<<"0\n";
        }else if((n1==0 or n2==0) or (max(n1,n2)%min(n1,n2))==0){
            cout<<"1\n";
        }else{
            cout<<"2\n";
        }
    }
}