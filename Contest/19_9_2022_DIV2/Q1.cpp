#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      ll x;
      map<int,ll>m;
      for (int i = 0; i < n; i++){
         cin>>x;
         if(m.find(i%k)!=m.end()){
            m[i%k]=max(m[i%k],x);
         }
         else m[i%k]=x;
      }
        ll ans=0;
        for(auto it:m) ans+=it.second;
        cout<<ans<<"\n";
   }
}