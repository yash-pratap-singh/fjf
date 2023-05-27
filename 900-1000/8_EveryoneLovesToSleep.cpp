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
        int n, H, M;
        cin >> n >> H >> M;
        int ans = INT_MAX;
        int alarm;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;
            if ((h * 60 + m) < H * 60 + M)
            {
                alarm = 24 * 60 - (H * 60 + M) + (h * 60 + m);
            }
            else
            {
                alarm = (h * 60 + m) - (H * 60 + M);
            }
            ans = min(ans, alarm);
        }
        cout<<ans/60<<" "<<ans%60<<"\n";
        
    }
}