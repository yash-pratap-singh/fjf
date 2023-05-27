#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#include <unordered_map>
#include <list>
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

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
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
        int a = 0, b = 0, cnt = 0, ad = 1;
        // n--;
        while (n>0)
        {

            if (cnt % 2 == 0)
            {
                if (ad > n)
                {
                    a += n;
                    break;
                }
                a += ad;
                // ad += 4;
                cnt++;
            }
            else
            {
                if (ad > n)
                {
                    b += n;
                    break;
                }
                b += ad;
                // ad += 4;
                cnt++;
            }
            // cout<<a<<" "<<b<<"\n";
            n -= ad;
                ad += 4;

        }
        cout << a << " " << b << "\n";
    }
}