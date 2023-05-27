#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<list>
#define pb push_back
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long> >
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

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
    string s,a; cin>>s;
    a="314159265358979323846264338327";
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==a[i]) cnt++;
        else break;
    }
    cout<<cnt<<"\n";
    }
}