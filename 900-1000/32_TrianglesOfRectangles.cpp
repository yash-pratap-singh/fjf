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
    int w,h; cin>>w>>h;
    ll maxW=INT_MIN, minW=INT_MAX;
    int k;
    
    cin>>k;
    ll x;
    for(int i=0;i<k;i++){
        cin>>x;
        maxW=max(maxW,x);
        minW=min(minW,x);
    }
    ll width=maxW-minW;
    minW=INT_MAX;
    maxW=INT_MIN;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>x;
        maxW=max(maxW,x);
        minW=min(minW,x);
    }
    width=max(width,(maxW-minW));

    ll maxH=INT_MIN, minH=INT_MAX;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>x;
        maxH=max(maxH,x);
        minH=min(minH,x);
    }
    ll height=maxH-minH;
    maxH=INT_MIN;
    minH=INT_MAX;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>x;
        maxH=max(maxH,x);
        minH=min(minH,x);
    }
    height=max(height,(maxH-minH));

    cout<<max(width*h,height*w)<<"\n";
   }
}