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


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
   int t; cin>>t;
   while(t--){
    int w,d,h; cin>>w>>d>>h;
    int a,b,f,g; cin>>a>>b>>f>>g;
    int x=(d-b)+(d-g);
    int y=b+g;
    int x1=(w-a)+(w-f);
    int x2=a+f;
    cout<<x1<<" "<<x2<<" "<<x<<" "<<y;
    // int ans;
    // ans=h+abs(a-f)+min(x,min(y,min(x1,x2)));
    // cout<<ans<<"\n";
   }
}