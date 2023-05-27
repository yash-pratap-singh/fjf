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

bool sort1(pair<int,vi>p1,pair<int,vi>p2){
    return p1.first>p2.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int temp[n];
        map<int, vi> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            temp[i]=a[i];
            m[a[i]].pb(i);
        }
        sort(temp,temp+n,greater<int>());
       int i=0,j=0,maxi=0,mini=0;
       ll time=0;
       while(i<n){
        for(auto it:m[temp[i]]){
            if(j%2==0){
                mini-=1;
                time+=abs(0-mini)*2*temp[i];
                a[it]=mini;
                j++;
            } else{
                maxi+=1;
                time+=abs(0-maxi)*2*temp[i];
                a[it]=maxi;
                j++;
            }
        }
        i+=m[temp[i]].size();
       }
       cout<<time<<"\n";
        cout<<"0 ";
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
        
    }
}