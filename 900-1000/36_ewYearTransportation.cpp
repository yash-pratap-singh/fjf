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
   int n,t;
    cin>>n>>t;
    int x;
    int curr=1;
    string ans="NO";
    for(int i=1;i<n;i++){
        cin>>x;
        if(i==curr){
            curr=x+i;
        }
        if(curr==t){
            ans="YES";
        }
    }
    cout<<ans<<"\n";

}