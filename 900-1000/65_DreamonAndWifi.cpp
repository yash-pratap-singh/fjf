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

    string s1,s2;
    cin>>s1;
    cin>>s2;

    ll int dest=0, prob=1, reach=0, cnt=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='+') dest++;
        else dest--;
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]=='+') reach++;
        else if(s2[i]=='-') reach--;
        else{
            prob*=2; cnt++;
        }
    }
    ll int x=abs(dest-reach);
     double ans;
    if(x==cnt){
        ans=(double)(1.0);
    }else if(x>cnt){
        ans=(double)(0.0);
    }else{
        if(x%2==1 and cnt%2==0 or x%2==0 and cnt%2==1) ans=(double)(0.0);
        if(x%2==0){
            if(cnt%2==1) ans=(double)(0);
            else{
                int plus=(cnt-x)/2;
                ans=(double)(nCr(cnt,plus)*1.0);
            }
        }else{
            if(cnt%2==0) ans=(double)(0.0);
            else{
                int plus=(cnt-x)/2;
                ans=(double)(nCr(cnt,plus)*1.0);
            }
        }
    }
    printf("%0.9f", (ans/prob));
    // cout<<reach<<" "<<dest<<" "<<prob<<"\n";
}