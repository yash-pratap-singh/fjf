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
        int n, x, y;
        cin >> n >> x >> y;
        if (x == 0 and y == 0)
        {
            cout << "-1\n";
            continue;
        }
        if (x != 0 and y != 0)
        {
            cout << "-1";
        }
        else
        {
            if (((n-1)%max(x,y)!=0) and ((n-1) / (max(x, y)) * max(x, y) + min(x, y) != n))
            {
                cout << "-1";
            }
            else
            {
                int st = 0;
                for (int i = 0; i < n - 1; i++)
                {
                    if (i % max(x, y) == 0)
                    {
                        st = i + 2;
                    }
                    cout << st << " ";
                }
            }
        }
        cout << "\n";
    }
}