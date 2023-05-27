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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string t;
        cin >> t;
        vi s;
        for (int i = 0; i < n; i++)
        {
            if (t[i] == '0')
            {
                s.pb(i + 1);
            }
        }
        int ans=0;
        if(s.size()==0){
            cout<<"0\n";
            continue;
        }
        for(int i=0;i<s.size();i++){
            int j=2;
            while(s[i]&j<=n){
                i
                j++;
            }
        }
        cout<<ans<<"\n";
    }
}