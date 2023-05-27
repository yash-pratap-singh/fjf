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
        ll n; cin>>n;
        ll k; cin>>k;
        string s; cin>>s;
        if(k>n){
            k=k%n;
            string s1,s2;
            s1=s.substr(0,k);
            s2=s1;
            reverse(s2.begin(),s2.end());
            // int j=0;
            // for(int i=k-1;i>=0;i--) {s2[j]=s1[i]; j++;}
            // cout<<s1<<" "<<s2<<"\n";
            // cout<<s2.length()<<"\n";
            // return 0;
            int f1=1,f2=0;
            for(int i=0;i<n;i+=k){
                if(s.substr(i,k)==s1 and f1==1){f1=0;}
                else if(s.substr(i,k)==s2 and f1==0){f1=1;}
                else{f2=1; break;}
                // else if(s.substr(i,k)==s1.)
            }
            if(f2){cout<<"No\n"; continue;}
        }
        
            int st,ed;
            st=k,ed=n-1;
            int f=0;
            while(st<ed){
                if(s[st]!=s[ed]){f=1; break;}
                st++;ed--;
            }
            if(f){cout<<"No\n"; continue;}
            st=0; ed=n-1-k;
            while(st<ed){
                if(s[st]!=s[ed]){f=1; break;}
                st++; ed--;
            }
            if(f){cout<<"No\n"; continue;}

            st=0;ed=n-1;
            for(int i=0;i<k;i++){
                if(s[st+i]!=s[ed-k+i+1]){f=1; break;}
            }
            if(f){cout<<"No\n";
             continue;}
            else cout<<"Yes\n";
        
    }
}