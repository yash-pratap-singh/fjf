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
    int n,k; cin>>n>>k;
    if((n-k-1)<k) {cout<<"-1\n"; return 0;}
    cout<<(n*k)<<endl;
    for(int i=1;i<=k+1;i++){
        int j=k;
        while(j){
            cout<<i<<" "<<i+(k-j+1)<<"\n";
            j--;
        }
    }
    for(int i=k+2;i<=n;i++){
        int j=i-k-1;
        int m=k;
        while(j and m){
            cout<<i<<" "<<(i-k-1-j+1)<<"\n";
            j--;
            m--;
        }
        int l=1;
        while(m){
            cout<<i<<" "<<i+l<<"\n";
            l++;
            --m;
        }
    }
}