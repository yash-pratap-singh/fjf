#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> dp(n, 1e18);
    dp[0] = 0;
    int mini;
    cout<<dp[0]<<" ";

    for (int j = 1; j < n; j++)
    {
        mini = a[j];
        for (int i = j - 1; i >= 1; i--)
        {
            mini = min(mini, a[i]);
            // if(mini*(j-i)*(j-i)>n) break;
            dp[j] = min(dp[j], (dp[i] + mini * (j - i) * (j - i)));
            if(a[j]>a[i]) break;
        }
        cout << dp[j] << " ";
    }
    
}