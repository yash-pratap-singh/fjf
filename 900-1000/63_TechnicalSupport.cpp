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
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    string s;
    cin>>s;
    if(n==1) cout<<"No\n";
    else{
        int q=0,a=0;
        bool ans=false;
        for(int i=0;i<n;i++){
            if(s[i]=='Q') q++;
            else a++;
        }
        if(q>a) cout<<"No\n";
        else cout<<"Yes\n";
    }
   }
}