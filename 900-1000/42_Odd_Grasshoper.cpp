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
        ll x, n;
        cin >> x >> n;
        if(x%2==0){
            if(n%2==0){
                cout<<(x+n-pow(2,(n-1)/2));
            }else{
                // n--;
                cout<<(x-n+1);
            }
        }else{
            if(n%2==0){
                // n--;
                cout<<(x-n+pow(2,(n-1)/2));
            }else{
                // n--;
                cout<<(x-n-5);
            }
        }
        cout<<"\n";
    }
}