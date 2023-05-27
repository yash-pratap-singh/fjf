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



int main()
{
    int n, q;
    cin >> n >> q;
    ll a[n+1];
    a[0]=0;
    for(int i=0;i<n;i++) cin>>a[i+1];
    sort(a,a+n+1);

    for(int i=1;i<=n;i++) a[i]=a[i]+a[i-1];
    int x,y;
    while(q--){
        cin>>x>>y;
        cout<<a[n+y-x]-a[n-x]<<"\n";
    }
}