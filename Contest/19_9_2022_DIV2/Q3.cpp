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
        int n;
        cin >> n;
        ll a[n + 1];
        vi odd,even;

        for (int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                even.pb(i);
            }else odd.pb(i);
        }
        cout<<n-1<<"\n";
        if(a[1]%2==0){
            for(int i=even.size()-2;i>=0;i--)
            cout<<even[i]<<" "<<even[i+1]<<"\n";
            for(int i=0;i<odd.size();i++){
                cout<<"1 "<<odd[i]<<"\n";
            }
        }else{
            for(int i=odd.size()-2;i>=0;i--){
                cout<<odd[i]<<" "<<odd[i+1]<<"\n";
            }
            for(int i=0;i<even.size();i++){
                cout<<"1 "<<even[i]<<"\n";
            }
        }
        
       
    }
}