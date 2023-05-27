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
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        ll a[n];
        ll b[n];
        map<int,int>m1;
        map<int,int>m2;
        for(int i=0;i<n;i++) {cin>>a[i]; m1[a[i]]++;}
        for(int i=0;i<n;i++) {cin>>b[i]; m2[b[i]]++;}
        sort(a,a+n);
        sort(b,b+n);
        int i=0,j=0,cnt=0;
        while(i<n and j<n){
            if(a[i]==b[j]){
                cnt++;
                i++;
                j++;
            }else if(a[i]>b[j]){
                j++;
            }else{
                i++;
            }
        }
        cout<<(n-cnt)<<"\n";
    }
}