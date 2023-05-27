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
    string s, t;
    cin >> s;
    cin >> t;
    int ans;
    if (s[0] == t[0])
    {
        ans = s[1] - t[1];
        cout << abs(ans) << "\n";
        if (ans < 0)
        {
            for (int i = 0; i < (s[1] - t[1]); i++)
                cout << "D\n";
        }
        else
        {
            for (int i = 0; i < ans; i++)
                cout << "U\n";
        }
    }else if(s[1]==t[1]){
        ans=s[0]-t[0];
        cout<<abs(ans)<<"\n";
        if(ans<0){
            for(int i=0;i<abs(ans);i++) cout<<"R\n";
        }else
        for(int i=0;i<abs(ans);i++) cout<<"L\n";
    }else{
        
    }
}