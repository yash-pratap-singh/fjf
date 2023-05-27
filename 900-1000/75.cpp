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

bool sortem(pair<int,int>&p1, pair<int,int>&p2){
    return p1.first>p2.first;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        priority_queue<pair<int,int> >pq;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            pq.push(make_pair(x,i+1));
        }
        vector<pair<int,int> >ans;
        while(!pq.empty()){
            if(pq.size()==1) break;
            auto x=pq.top(); pq.pop();
            auto y=pq.top(); pq.pop();
            if(x.first>0 and y.first>0){
                ans.push_back(make_pair(x.second,y.second));
                x.first-=1;
                y.first-=1;
            }
            if(x.first) pq.push(x);
            if(y.first) pq.push(y);
        }
        cout<<ans.size()<<"\n";
        for(int i=0;i<ans.size();i++) cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
}