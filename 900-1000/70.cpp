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
int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
//    int t; cin>>t;
//    while(t--){
//     int n; cin>>n;
//     vl a(n+1);
//     int ans=n;
//     for(int i=1;i<=n;i++) cin>>a[i];
//     for(int i=1;i<=n;i++){
//         if(ans==0) break;
//         int cnt=0;
//         while(1){
//             if(a[i]==1){ans=min(ans, cnt*(n-i+1)); break;}
//             if(a[i]==i) break;
//             a[i]=gcd(a[i],i);
//             cnt++;
//         }
//     }
//     cout<<ans<<"\n";
//    }

    int x;
    x=gcd(0,7);
    cout<<x;
}