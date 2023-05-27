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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            cout << "0\n";
        else
        {
            sort(a.begin(), a.end());
            ll cnt = 0;
            int maxi=a[0]*2-1;
            for(int i=1;i<n;i++){
                if(a[i]<=maxi) continue;
                cnt+=(a[i]-1)/maxi;
                // cout<<a[i]<<" "<<cnt<<"\n";
            }
            cout << cnt << "\n";
        }
    }
}