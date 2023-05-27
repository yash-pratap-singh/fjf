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

bool sortem(vi p1, vi p2)
{
    return (p1.size() > p2.size());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][5];
        vector<vector<int> > m(5);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                {
                    m[j].pb(i);
                }
            }
        }
        vi stud(n, 0);
        vi cnt(n,0);
        int cnt2 = 0;
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i].size() >= n / 2)
                for (int j = 0; j < m[i].size(); j++)
                {
                    if (stud[m[i][j]] == 0)
                    {
                        stud[m[i][j]] = 1;
                        cnt[i]++;
                    }
                    else
                    {
                        cnt2++;
                    }
                    if (cnt2 > 0)
                    {
                        cnt[i - 1] = cnt[i - 1] - cnt2;
                    }
                }
        }
        int cnt3=0;
        for(auto it:cnt){
            if(it>=n/2) cnt3++;
        }
        if(cnt3>=2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}