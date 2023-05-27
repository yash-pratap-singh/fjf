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
        vi a(2,0),b(2,0);
        int ad=1,cnt=0;
        while(n){
            if(cnt%2==0){
                if(ad>n){ 
                    int w=(n/2)+(n%2);
                    int B=n-w;
                    a[0]+=w;
                    a[1]+=B;
                    break;}
                int w=(ad/2)+1;
                int B=ad-w;
                a[0]+=w;
                a[1]+=B;
                cnt++;
            }else{
                if(ad>n){
                    int B=(n/2)+(n%2);
                    int W=n-B;
                    b[0]+=W; b[1]+=B;
                    break;}
                int B=ad/2+1;
                int w=ad-B;
                b[0]+=w;
                b[1]+=B;
                cnt++;
            }
            n-=ad;
            ad+=4;
        }
        cout<<a[0]<<" "<<a[1]<<" "<<b[0]<<" "<<b[1]<<"\n";
    }
}