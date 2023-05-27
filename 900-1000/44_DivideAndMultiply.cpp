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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            while(a[i]%2==0){
                cnt++;
                a[i]/=2;
            }
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            sum+=a[i];
        }
        sum+=a[n-1]*(pow(2,cnt));
        cout<<sum<<"\n";
    }
}