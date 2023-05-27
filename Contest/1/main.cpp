#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#include<set>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

int fact(int n)
{
      if(n==0)
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

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   
}