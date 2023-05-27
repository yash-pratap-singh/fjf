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
    while(t--)
    {
        int n; cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
int st=0;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                a[i]=i;
                a[st]=i+1;
                st=i+1;
            }else{
                a[i]=i;
            }
        }

        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";


        // map<int,vector<int> >m;
        // for(int i=0;i<n;i++){
        //     m[a[i]].push_back(i+1);
        // }
        // int f=0;
        // for(auto it:m){
        //     if(it.second.size()==1){
        //         f=1;
        //         break;
        //     }
        // }
        // if(f==1){
        //     cout<<"-1\n";
        // }else{
        //     int st=0;
        //    for(auto it:m){
        //     cout<<it.second.size()+st<<" ";
        //     for(int i=0;i<it.second.size()-1;i++){
        //         cout<<it.second[i]<<" ";
        //     }
        //     st+=it.second.size();
        //    }
        // }
    }
}