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
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = a[0];
        int flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == sum)
            {
                if (a[i] == a[n - 1] and a[i]==a[0])
                {
                    flag = 0;
                    break;
                }
                else if(a[i]==a[n-1])
                    swap(a[i], a[0]);
                else{ swap(a[i],a[n-1]);}
            }
            sum+=a[i];
        }
        if (flag)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
}