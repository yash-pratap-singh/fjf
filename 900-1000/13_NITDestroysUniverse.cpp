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
        int n;
        cin >> n;
        ll a[n];
        a[0]=0;
        int ans=0;
        for (int i = 1; i <=n; i++)
        {
            cin >> a[i];
            if(a[i]>0 and a[i-1]==0) ans++;
        }
        ans=min(ans,2);
        cout<<ans<<"\n";
    }
}