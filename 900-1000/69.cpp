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
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
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
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vi dp(n + 1, -1);

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= b[i])
            {
                continue;
            }

            for (int j = 1; j < a[i]; j++)
            {
                if (dp[j] == -1)
                    if ((a[i]/j + a[i] % j )>= (b[i]/j + b[i] % j))
                        dp[j] = 1;
            }
            dp[b[i]] = 1;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dp[i] == -1)
                cnt++;
        }
        cout << cnt << "\n";
        for (int i = 1; i <= n; i++)
        {
            if (dp[i] == -1)
                cout << i << " ";
        }
        cout << "\n";
    }
}