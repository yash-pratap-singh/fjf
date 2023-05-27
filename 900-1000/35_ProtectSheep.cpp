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

int mx[4] = {0, 0, 1, -1};
int my[4] = {1, -1, 0, 0};

bool isValid(int x, int y, int n, int m)
{
    return (x >= 0 and y >= 0 and x < n and y < m);
}

int main()
{
    int r, c;
    cin >> r >> c;
    vector<string> v;
    string s;
    for (int i = 0; i < r; i++)
    {
        cin >> s;
        v.pb(s);
    }
    string ans = "YES";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (v[i][j] == 'W')
            {
                for (int k = 0; k < 4; k++)
                {
                    int x = i + mx[k];
                    int y = j + my[k];
                    if (isValid(x, y, r, c))
                    {
                        if (v[x][y] == 'S')
                        {
                            ans = "NO";
                            break;
                        }
                        else if(v[x][y]=='.')
                        {
                            v[x][y] = 'D';
                        }
                    }
                }
            }
        }
    }

    if (ans=="NO"){
        cout<<ans<<"\n";
    }else{
        cout<<ans<<"\n";
        for(int i=0;i<r;i++){
            cout<<v[i]<<"\n";
        }
    }
}