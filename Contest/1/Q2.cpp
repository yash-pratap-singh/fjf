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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi p(n), dp(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            dp[p[i]] = i;
        }
        
        
        
            // cout<<"Ans : "<<ans<<"\n";
            int ans;
            int cnt = 1;
            for (int i = 2; i <= n; i++)
            {
                if (dp[i] > dp[i - 1])
                {
                    cnt++;
                }
                else
                    break;
            }
            ans=(n-cnt)/k;
            if((n-cnt)%k!=0) ans+=1;       // or  ans=(n-cnt)/k + (k-1)/k;
            cout << ans << "\n";
        
    }
}