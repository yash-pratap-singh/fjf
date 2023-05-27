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
        int temp[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            temp[i]=a[i];
        }
        if(n==1){
            cout<<"-1\n";
            continue;
        }
        sort(temp,temp+n);
        for(int i=0;i<n;i++){
            if(a[i]!=temp[i]){
                continue;
            }else{
                if(i==n-1){
                    swap(temp[i],temp[i-1]);
                }
                else{
                    swap(temp[i],temp[i+1]);
                }
            }
        }
        for(int i=0;i<n;i++) cout<<temp[i]<<" ";
        cout<<"\n";
    }
}