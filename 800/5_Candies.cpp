#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        int ans=0;
        // 2^10=10^3(approx)  therefore, 2^30==10^9(approx)  and  2^35>1e9
        for(int k=2;k<=35;k++){
           int den=pow(2,k)-1;
           if(n%den) continue;
           ans=n/den;
           break;
        }
        cout<<ans<<"\n";
    }
}