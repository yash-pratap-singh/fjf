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
        string s;
        string t;
        cin >> s;
        t=s;
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"0\n";
            continue;
        }
        cout<<"1\n";
        vi v;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                v.pb(i+1);
                cnt++;
            }
        }
        cout<<cnt<<" ";
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<"\n";
    }
}