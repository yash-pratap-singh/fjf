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
        ll n;
        cin >> n;
        if(n%2==0){
            cout<<(n-3)<<" 2 1\n";
        }else{
            if(((n-1)/2)%2==0){
                cout<<(n-1)/2 +1<<" "<<(n-1)/2 -1<<" 1\n";
            }else{
                cout<<(n-1)/2 +2<<" "<<(n-1)/2-2<<" 1\n";
            }
        }
    }
}