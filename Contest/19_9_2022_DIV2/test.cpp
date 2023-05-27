#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a[100005];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        cout << n - 1 << "\n";
        if (n - 1)
            cout << "1 " << n << "\n";
        for (int i = 2; i < n; ++i)
            if (a[i] % 2 != a[1] % 2)
                cout << "1 " << i << "\n";
            else
                cout << i << " " << n << "\n";
    }
}