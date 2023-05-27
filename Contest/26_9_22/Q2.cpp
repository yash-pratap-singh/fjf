#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

bool sortem(pair<ll,ll>p1,pair<ll,ll>p2){
    return p1.first<p2.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ll t,mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>t;
            mini=min(mini,(a[i]-t));
            maxi=max(maxi,(a[i]+t));
        }
        cout<<(mini+maxi)/2;
        if((mini+maxi)%2==1){
            cout<<".5";
        }
        cout<<"\n";
        
    }
}