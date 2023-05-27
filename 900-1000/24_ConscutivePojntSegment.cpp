#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;


int main(){
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    bool mov=false, f=true;
    for(int i=1;i<n;i++){
        int gap=a[i]-a[i-1];
        if(gap==1) continue;
        else if(gap==2 and mov==false){
            mov=true;
        }
        else if(gap==2 and mov==true){
            a[i]=a[i]-1;
        }
        else if(gap==3){
            if(mov==false){
                a[i]=a[i]-1;
                mov=true;
            }
            else
            {
                f=false;
                break;
            }
        }
        else{
            f=false;
            break;
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
   }
}