#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int ans=0;
    while(n--){
        int a[3];
        int sure=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            (a[i]==1)?sure++:1;
        }
        if(sure>=2){
            ans++;
        }
    }
    cout<<ans<<"\n";
}