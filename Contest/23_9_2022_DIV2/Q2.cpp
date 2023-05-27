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
    cout<<"1\n";
    for(int i=2;i<=n;i++){
        int j=i;
        cout<<"1 ";
        j-=2;
        while(j>0){
            cout<<"0 ";
            j--;
        }
        cout<<"1\n";
    }
   }
}