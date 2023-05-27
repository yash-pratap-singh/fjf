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
        int n; cin>>n;
        string s; cin>>s;
        int x=0,y=0,f=0;
        for(int i=0;i<n;i++){
            if(x==1 and y==1){f=1; break;}
            if(s[i]=='L'){
                x-=1;
            }else if(s[i]=='R'){
                x+=1;
            }else if(s[i]=='U'){
                y+=1;
            }else if(s[i]=='D'){
                y-=1;
            }
        }
        
        if(f or (x==1 and y==1)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}