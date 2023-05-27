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
        vi a(n + 1), cnt(n+1,0), dp(n+1,0);
        stack<int>s;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(cnt[i]==0) s.push(i);
            else if(cnt[i]==1) dp[i]=i;
            else if(cnt[i]==2 and !s.empty()) {dp[i]=s.top(); s.pop();}
            else {flag=false; break;}
        }
        
        if(flag){
            cout<<"YES\n";
            for(int i=1;i<=n;i++){
                if(cnt[a[i]]==1) cout<<dp[a[i]]<<" ";
                else{
                    cout<<a[i]<<" ";
                }
                    cnt[a[i]]--;
            }
            cout<<"\n";
            for(int i=1;i<=n;i++){
                if(cnt[a[i]]==0) cout<<dp[a[i]]<<" ";
                else{
                    cout<<a[i]<<" ";
                }
                    cnt[a[i]]--;
            }
            cout<<"\n";
        }else cout<<"NO\n";
        
    }
}
