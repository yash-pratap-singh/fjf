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


int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    int n;
    ll M; cin>>n>>M;

    int x=fact(2*n);
    int x1=(x-1);
    cout<<x<<"\n";
    ll ans;
    ans=x1*3+x1*2+(fact(3*n)-1)*2;
    cout<<ans<<"\n";
    cout<<(ans%M)<<"\n";


    // vector<vector<vector< vector<int> > > >dp(3*n, vector<vector< vector<int> > >(3*n, vector< vector<int> >(3*n, vector<int>(3*n,-1))));
    // for(int i=0;i<3*n;i++){
    //     for(int j=0;j<3*n;j++){
    //         for(int k=0;k<3*n;k++){
    //             for(int m=0;m<3*n;m++) cout<<dp[i][j][k][m]<<" ";
    //         }
    //     }
    // }
   
}