#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void solve(vector<int>&a, int n){

}

int main(){
    int t;
    cin>>t;

    while(t--){
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ans=INT_MIN;
        int n; cin>>n;
        vector<int>a(n);
        int diff=0;
        for(int i=0;i<n;i++){
         cin>>a[i];
        }
        if(n==1){
            cout<<"0"<<"\n";
            continue;
        }
        for(int i=0;i<n-1;i++){
            ans=max(ans,a[i]-a[i+1]);
        }
        for(int i=0;i<n-1;i++){
            mini=min(mini,a[i]);
        }
        ans=max(ans,(a[n-1]-mini));
        for(int i=1;i<n;i++){
            maxi=max(maxi,a[i]);
        }
        ans=max(ans,maxi-a[0]);

        cout<<ans<<"\n";
    }
}