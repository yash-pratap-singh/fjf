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
#define vl vector<long long>
#define vvi vector<vector<int> >
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

bool isValid(int i, int j, int n, int m)
{
    if (i >= 0 and i < n and j >= 0 and j < m)
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cout<<"START....\n";
    string s;
    cin >> s;
    int xx[4] = {-1, 1, 0, 0};
    int yy[4] = {0, 0, -1, 1};
    int n1=s.length();

    vvi grid(201, vi(201, 0));
    // grid[101][101] = 1;

    int i = 101, j = 101;
    int f=0;
    for (int x = 0; x < s.length(); x++)
    {
        int sum=0;
        grid[i][j]=1;
        
        if (s[x] == 'L')
        {
            j--;
            // grid[i][j] = 1;
        }
        else if (s[x] == 'R')
        {
            j++;
            // grid[i][j] = 1;
        }
        else if (s[x] == 'U')
        {
            i++;
            // grid[i][j] = 1;
        }
        else
        {
            i--;
            // grid[i][j] = 1;
        }
        if(isValid(i-1,j,201,201)) sum+=grid[i-1][j];
        if(isValid(i+1,j,201,201)) sum+=grid[i+1][j];
        if(isValid(i,j-1,201,201)) sum+=grid[i][j-1];
        if(isValid(i,j+1,201,201)) sum+=grid[i][j+1];
        sum+=grid[i][j];
        if(sum>1) {f=1; break;}

    }
    
    if(f) cout<<"BUG\n"; else cout<<"OK\n";
    // grid[i][j] = 1;
    // for(int i=0;i<=2*n+4;i++){
    //     for(int j=0;j<=2*n+4;j++) cout<<grid[i][j]<<" "; cout<<"\n";
    // }

   
    // if(ans==s.length()) cout<<"OK\n"; else cout<<"BUG\n";
    // if (i == 0 and)
}