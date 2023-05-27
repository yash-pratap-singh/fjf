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
#define vl vector<long long>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long> >
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
    int t;
    cin >> t;
    for (int i1 = 1; i1 <= t; i1++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vi dp(n, INT_MAX), dp2(n, INT_MAX);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                dp[i] = 0;
                cnt++;
            }
            else if (s[i] == '0' and cnt != 0)
                dp[i] = dp[i - 1] + 1;
            continue;
        }
        cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                dp2[i] = 0;
                cnt++;
            }
            else if (s[i] == '0' and cnt != 0)
                dp2[i] = dp2[i + 1] + 1;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
             if(dp[i]==INT_MAX and dp2[i]==INT_MAX) continue;
        else ans+=min(dp[i],dp2[i]);
        }
        cout << "Case #" << i1 << ": " << ans << "\n";
    }
}