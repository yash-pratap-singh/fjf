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
        int n,k; cin>>n>>k;
        string a,b; cin>>a>>b;
        map<int,int>m;
        for(int i=0;i<a.length();i++){
            m[a[i]-'a']++;
        }
        if(m.size()<=k){cout<<(n*(n+1))/2<<"\n";}
        else{
            set<char>s;
            int freq=0;
            int i=0;
            while(s.size()!=k and i<a.length()){
                if(s.find(a[i])!=s.end()){
                    freq-=1;
                }
                else{
                    s.insert(a[i]);
                    freq+=m[a[i]-'a']-1;
                }
                i++;
            }
            int ans; ans=(i*(i+1))/2+freq;
            // cout<<freq<<" "<<s.size()<<"\n";
            // cout<<i<<"\n";
            for(int j=i;j<a.length();j++){
                if(s.find(a[j])!=s.end()){
                    s.erase(a[j-k]);
                    freq-=m[a[j-k]-'a'];
                    freq+=1;
                    s.insert(a[j]);
                    freq+=m[a[j]-'a'];
                    freq-=1;
                    ans=max(ans,(k*(k+1))/2+freq);
                }else{
                    freq-=1;
                    
                }
            }

            // for(int i=0;i<k;i++){
            //     s.insert(a[i]);
            //     freq+=m[a[i]-'a']-1;
            // }
            // int ans=-1;
            // ans=(k*(k+1))/2 + freq;
            // int cnt=k;
            // int f=0;
            // for(int i=k;i<a.length();i++){
            //     if(m[a[i-k]-'a']>1){freq=freq-m[a[i-k]-'a']+1;}
            //     if(s.find(a[i])!=s.end()){
            //         cnt++;
            //         freq-=1;
            //         int x;
            //         x=(cnt*(cnt+1))/2+freq;
            //         ans=max(ans,x);
            //         f=1;
            //     }else{
            //         s.erase(a[i-k]);
            //         s.insert(a[i]);
            //         cnt=k;
            //         freq=freq-m[a[i-k]-'a']+1;
            //         freq=freq+m[a[i]-'a']-1;
            //         if(f) {freq+=1; f=0;}
            //         int x;
            //         x=(cnt*(cnt+1))/2 + freq;
            //         ans=max(ans,x);
            //     }
            // }
            // cout<<ans<<"\n";
        }
    }
}