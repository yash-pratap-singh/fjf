#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<math.h>
#include<queue>
#include<stack>
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;


int main(){
   int t; cin>>t;
   while(t--){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int temp[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            temp[i][j]=a[i][j];
        }
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x=i-1,y=j-1;
            while(x>=0 and y>=0){
                temp[i][j]+=a[x][y];
                x-=1;
                y-=1;
            }
            x=i-1;
            y=j+1;
            while(x>=0 and y<m){
                temp[i][j]+=a[x][y];
                x-=1;
                y+=1;
            }
            x=i+1;
            y=j-1;
            while(x<n and y>=0){
                temp[i][j]+=a[x][y];
                x+=1;
                y-=1;
            }
            x=i+1; y=j+1;
            while(x<n and y<m){
                temp[i][j]+=a[x][y];
                x+=1;
                y+=1;
            }
        maxi=max(maxi,temp[i][j]);
        }
        
    }
    cout<<maxi<<"\n";

   }
}