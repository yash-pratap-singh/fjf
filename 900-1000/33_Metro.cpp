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
    int n, s;
    cin >> n >> s;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int b[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    if(a[1]==0){
        cout<<"NO\n";
    }
    else{
    if (a[s] == 1)
    {
        cout << "YES\n";
    }
    else
    {
        if (b[s] == 0)
        {
            cout << "NO\n";
        }
        else
        {
            int f=0;
            for (int i = s + 1; i <= n; i++)
            {
                if(a[i]==1 and b[i]==1){
                    f=1;
                    break;
                }
            }
            if(f==1){
                cout<<"YES\n";
            }else cout<<"NO\n";
        }
    }
    }
}