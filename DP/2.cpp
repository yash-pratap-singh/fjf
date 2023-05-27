#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#include <set>
#include <unordered_map>
#include <list>
#define pb push_back
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int>>
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

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

bool isValid(int i, int j, int n, int m){
    if(i>=0 and j>=0 and i<n and j<m) return true;
    return false;
}

vector<int> x{1,-1,0};
vector<int> y{0,0,1};



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    
    while (t--)
    {
       
    }
}